/* Straight-line functions with calls and guards (batch gen_ab): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_DecodeHeader(int, int, int);
int ADXB_GetFormat(int);
int SJ_SplitChunk(int, int, int, int);
int _add(int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int _mvsto2b(int, int);
int check_file_correct(int, int);
int kmiFLWCTRLCheckFinishPacket(int);
int kmiFLWCTRLFindTopQueue(void);
int kmiFLWCTRLStartDMAEntry(void);
int kmiFLWCTRLStartDisplayEntry(int);
int kmiFLWCTRLStartRenderEntry(void);
int kmiGuaranteeFFModeProcessOver(int, int);
int kmiReadRegister(int);
int memmove(int, int, int);
int memset(int, int, int);
int mwRnaErrCallFunc(int, ...);
int mwRnaGetTransSw(int);
int mwlRnaAddFlshPos(int);
int mwlRnaAddWrPos(int);
int mwlRnaStartCopy(int, int, int, int, int);
int mwlRnaWaitTransEnd(int, int, int, int);
int nlArcTan(float);
int nlCalcPoint(int, int);
extern int nlLineCalcFogA();
int nlLineCalcFogB(int, int, int, float);
int nlLineCalcFogC(int, int, int, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAZ(int);
int nlSprPut(int, int, int, int);
int nlTranslate(float, float, float);
int ovLockCs_8c200114(int);
int ovUnlockCs_8c20012c(int);
int setjmp(int);
int vmsfs_diskfree(int, int);
int vmsfs_fclose(int, int);
int vmsfs_fgetinfo(int, int, int);
int vmsfs_save_exec_file_verify(int, int, int, int, int, int);
int vmsfs_write_retry(int, int, int);
int vmsfs_xcreate(int, int, int, int);
int vmsfs_xwrite1(int, int);
int vmsfs_save_exec_file(int a4, int a5, int a6, int a7, int a8, int a9);
int entryAssignSlotIds(void);
int kmGetCurrentScanline(int a4);
int nlLineCalcColor(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int adxsjd_decode_prep(int a4);
int mwRnaSetTransSw(int a4, int a5, int a6, int a7);
int kmiFLWCTRLRotateReadyQueue(int a4);
int buFbrCreateFiber(int a4, int a5, int a6, int a7);
int motionChange(int a4, int a5, int a6, int a7, int a8, float f4, float f5);
int sprRecPutRotated(int a4, int a5, int a6, int a7);
int mwlRnaInsrtSlntDat(int a4);
int vmsfs_rewrite_exec_file(int a4, int a5, int a6, int a7, int a8);
int _mult(int a4, int a5, int a6);
int nlArcTan2(float f4, float f5);

int vmsfs_save_exec_file(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t42;
    int t36;
    int t5;
    int t30;
    int t7;
    int t8;
    int t10;
    int t11;
    int t13;
    int t31;
    int stk[12];

    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    t0 = vmsfs_diskfree(a4, 0x1);
    t42 = t0;
    if ((int)t0 >= 0) {
        t36 = 0xFFFFFF04;
        if ((unsigned int)t0 < (unsigned int)a7) {
        } else {
            if ((0x80000000 & a9) != 0) {
                t31 = (vmsfs_save_exec_file_verify(a4, (*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 16))), a7, a8, a9));
            } else {
                t5 = vmsfs_xcreate(a4, (*(int *)(((int)stk + 20))), a8, ((int)stk + 12));
                t30 = t5;
                if ((int)t5 >= 0) {
                    *(unsigned char *)(((*(int *)(((int)stk + 12))) + 0x1)) = a9;
                    t7 = *(int *)(((int)stk + 16));
                    *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x30)) = 0x1;
                    t8 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x4));
                    *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x34)) = ((*(int *)((((((t8 << 2) + t8) << 2) << 2) + 0x8C20C77C))) + a7);
                    if ((unsigned int)0x0 < (unsigned int)a7) {
                        t10 = 0x0;
                        t11 = t7;
                        for (;;) {
                            t13 = vmsfs_xwrite1((*(int *)(((int)stk + 12))), t11);
                            if ((int)t13 >= 0) {
                                t10 = (t10 + 0x1);
                                t11 = (t11 + 0x200);
                                if ((unsigned int)t10 >= (unsigned int)a7) {
                                    break;
                                }
                                continue;
                            }
                            vmsfs_fclose((*(int *)(((int)stk + 12))), 0x0);
                            return t13;
                        }
                    }
                    vmsfs_fclose((*(int *)(((int)stk + 12))), 0x0);
                    t30 = 0x0;
                }
                t31 = t30;
            }
            t36 = t31;
        }
        t42 = t36;
    }
    return t42;
}

int entryAssignSlotIds(void)
{
    int t1;
    int t2;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t0;
    int stk[10];

    { struct mv4 { int w[4]; }; *(struct mv4 *)(((int)stk + 4)) = *(struct mv4 *)(0x8C11101C); }
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)0x8C287ADC;
        if ((int)t1 >= (int)t2) {
            break;
        }
        t0 = (t1 * 0x38);
        t0 = (t0 + 0x8C343264);
        t0 = (*(int *)((t0 + 0x4)));
        if (t0 != -1) {
            t0 = (t1 * 0x38);
            t0 = (t0 + 0x8C343264);
            t0 = (*(int *)((t0 + 0x4)));
            t0 = (t0 << 2);
            *(unsigned int *)((((int)stk + 4) + t0)) = 0x1;
        }
        t1 = (t1 + 0x1);
    }
    t7 = t0;
    t8 = ((int)stk + 4);
    t9 = t2;
    t10 = t1;
    t11 = 0x0;
    for (;;) {
        if ((int)t11 >= (int)(*(int *)0x8C287ADC)) {
            break;
        }
        t7 = 0x8C343258;
        t7 = (t7 + 0xC);
        t8 = (t11 * 0x38);
        t7 = (t7 + t8);
        t7 = (*(int *)((t7 + 0x4)));
        if (t7 == -1) {
            t10 = 0x0;
            for (;;) {
                t7 = 0x8C343258;
                t7 = (t7 + 0xC);
                t7 = (t7 + t8);
                t7 = (*(int *)((t7 + 0x4)));
                if (t7 != -1) {
                    break;
                }
                t7 = t10;
                t7 = (t7 << 2);
                t9 = (*(int *)((((int)stk + 4) + t7)));
                if (t9 == 0) {
                    t9 = 0x8C343258;
                    t9 = (t9 + 0xC);
                    t9 = (t9 + t8);
                    *(unsigned int *)((t9 + 0x4)) = t10;
                    *(unsigned int *)((((int)stk + 4) + t7)) = 0x1;
                }
                t10 = (t10 + 0x1);
            }
        }
        t11 = (t11 + 0x1);
    }
    return t7;
}

int kmGetCurrentScanline(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    float u10;
    float u15;
    int t20;
    int t21;
    int t26;
    int t29;
    int t23;
    int t25;
    int t5;
    int t18;
    float u19;
    int t13;

    t0 = kmiReadRegister(0x10C);
    t1 = *(int *)0x8C45EEA8;
    t2 = *(int *)0x8C45EEB8;
    t3 = *(int *)0x8C45EEA0;
    if ((((*(int *)0x8C45EE2C) & 0x1) != 1) && ((t5 = *(int *)0x8C45EE2C, (t5 & 44) != 0) && (0x1 != 0))) {
        u10 = 0.5f;
        if (((*(int *)0x8C45EE2C) & 32) != 0) {
            u10 = 1.0f;
        }
        t18 = ((t2 + t1) + (t2 + t1));
        u19 = u10;
    } else {
        u15 = 1.0f;
        if (((((((*(int *)0x8C45EE2C) == 0)) ? 1 : 0) & 32) != 0) && ((t13 = *(int *)0x8C45EE2C, (t13 & 0x1) == 1) && (0x1 != 0))) {
            u15 = 0.5f;
        }
        t18 = (t2 + t1);
        u19 = u15;
    }
    t20 = *(int *)0x8C45EE74;
    t21 = *(int *)0x8C45EE2C;
    t26 = (t21 & 0x1);
    t29 = (0x3FF & t0);
    if ((t21 & 0x1) != 1) {
        t23 = *(int *)0x8C45EE2C;
        t25 = (0x3FF & t0);
        if (((t23 & 44) != 0) && ((0x1 != 0) && ((t0 & 0x40000) != 0))) {
            t25 = ((0x3FF & t0) + 0x1);
        }
        t26 = t23;
        t29 = t25;
    }
    if ((int)(int)((float)(t29 - t18) * u19) <= (int)t3) {
        *(unsigned int *)((a4 + 0x0)) = (int)((float)(t29 - t18) * u19);
    } else {
        *(unsigned int *)((a4 + 0x0)) = ((int)((float)(t29 - t18) * u19) - ((unsigned int)t20 >> 16));
    }
    return t26;
}

int nlLineCalcColor(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = a6;
    for (;;) {
        t1 = ((int (*)(int, int, int, int, float, float, float, float, float, float, float))(nlLineCalcFogA))(a4, a5, t0, a7, f4, f5, f6, f7, f8, f9, f10);
        t2 = ((int (*)(int))(nlLineCalcFogA))(a5);
        if ((t1 & t2) != 0) {
            break;
        }
        if ((t1 == 0) && (t2 == 0)) {
            return 0x1;
        }
        t3 = t2;
        if (t1 != 0) {
            t3 = t1;
        }
        if (t1 == 0) {
            t0 = a5;
        } else {
            t0 = a4;
        }
        if ((t3 & 0x1) != 0) {
            nlLineCalcFogB(a4, a5, t0, (*(float *)0x8C454C50));
        } else {
            if ((t3 & 0x2) != 0) {
                nlLineCalcFogB(a4, a5, t0, (*(float *)0x8C454C48));
            } else {
                if ((t3 & 0x4) != 0) {
                    nlLineCalcFogC(a4, a5, t0, (*(float *)0x8C454C54));
                } else {
                    if ((t3 & 0x8) != 0) {
                        nlLineCalcFogC(a4, a5, t0, (*(float *)0x8C454C4C));
                    }
                }
            }
        }
    }
    return 0x0;
}

int adxsjd_decode_prep(int a4)
{
    int t0;
    int t2;
    int t4;
    int t5;
    int t7;
    int t9;
    int t12;
    int t13;
    int t15;
    int t24;
    int t27;
    int t35;
    int t8;
    int t31;
    int stk[11];

    t0 = *(int *)((a4 + 0x8));
    t2 = *(int *)((a4 + 0x4));
    t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x18)))))(t0, 0x1, 0x1000, (((int)stk + 4) + 0xC));
    t5 = *(int *)(((int)stk + 20));
    if ((int)t5 >= (int)0x10) {
        t7 = ADXB_DecodeHeader(t2, (*(int *)(((int)stk + 16))), t5);
        if ((t7 != 0) && (t8 = *(int *)(((int)stk + 20)), (int)t7 <= (int)t8)) {
            t9 = ADXB_GetFormat(t2);
            if (t9 == 4) {
                *(unsigned char *)((a4 + 0x3)) = 0x1;
            }
            t12 = ADXB_GetFormat(t2);
            if (t12 == 2) {
                t13 = *(int *)(((int)stk + 20));
                *(unsigned int *)(((int)stk + 4)) = t13;
                t15 = 0x40;
                if ((int)t13 < (int)0x40) {
                    t15 = (*(int *)(((int)stk + 4)));
                }
                memmove((a4 + 0x58), (*(int *)(((int)stk + 16))), t15);
            }
            SJ_SplitChunk((((int)stk + 4) + 0xC), t7, (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x4));
            t24 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x0, (((int)stk + 4) + 0xC));
            t27 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x1, (((int)stk + 4) + 0x4));
            *(unsigned char *)((a4 + 0x1)) = 0x2;
            t31 = 0x2;
        } else {
            t31 = (((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x1, (((int)stk + 4) + 0xC)));
        }
        t35 = t31;
    } else {
        t35 = (((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x1, (((int)stk + 4) + 0xC)));
    }
    return t35;
}

int mwRnaSetTransSw(int a4, int a5, int a6, int a7)
{
    int t3;
    int t16;
    int t23;
    int t36;
    int stk[7];
    int R1012;

    R1012 = *(int *)((int)stk + 12);

    R1012 = a5;
    if (a4 == 0) {
        t36 = (mwRnaErrCallFunc(0x8C20AC30));
    } else {
        *(unsigned int *)((a4 + 0x8C)) = 0x1;
        if ((unsigned char)(*(signed char *)((a4 + 0x5))) == 1) {
            mwlRnaWaitTransEnd(a4, a5, a6, a7);
            t3 = mwRnaGetTransSw(a4);
            if (t3 == 1) {
                mwlRnaAddWrPos(a4);
            } else {
                mwlRnaAddFlshPos(a4);
            }
            *(unsigned char *)((a4 + 0x5)) = 0x0;
        }
        ovLockCs_8c200114(((int)stk + 8));
        *(unsigned int *)((a4 + 0x8C)) = 0x0;
        if ((R1012) == 0) {
            t16 = mwRnaGetTransSw(a4);
            if (t16 != 0) {
                *(unsigned int *)((a4 + 0x50)) = (*(int *)((a4 + 0x2C)));
                *(unsigned int *)((a4 + 0x54)) = 0x0;
                *(unsigned int *)((a4 + 0x58)) = 0x0;
                *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) & 0x6);
            }
        } else {
            if ((R1012) == 1) {
                t23 = mwRnaGetTransSw(a4);
                if (t23 != 1) {
                    *(unsigned int *)((a4 + 0x2C)) = 0x0;
                    *(unsigned int *)((a4 + 0x30)) = 0x0;
                    *(unsigned int *)((a4 + 0x34)) = 0x0;
                    *(unsigned char *)((a4 + 0x6)) = 0x0;
                    *(unsigned int *)((a4 + 0x5C)) = 0x0;
                    *(unsigned int *)((a4 + 0x48)) = 0x0;
                    *(unsigned int *)((a4 + 0x4C)) = 0x0;
                    *(unsigned int *)((a4 + 0x3C)) = 0x0;
                    *(unsigned char *)((a4 + 0x4)) = 0x0;
                    *(unsigned int *)((a4 + 0x50)) = (*(int *)((a4 + 0x2C)));
                    *(unsigned int *)((a4 + 0x54)) = 0x0;
                    *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) | 0x1);
                }
            }
        }
        t36 = (ovUnlockCs_8c20012c(((int)stk + 8)));
    }
    return t36;
}

int kmiFLWCTRLRotateReadyQueue(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t14;
    int t32;
    int t5;
    int t31;

    t0 = kmiFLWCTRLFindTopQueue();
    if (t0 != 0) {
        t1 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t2 = 0x0;
        t3 = t0;
        for (;;) {
            t4 = kmiFLWCTRLCheckFinishPacket(t3);
            if ((t4 != 0) && (t5 = *(int *)((t3 + 0x14)), (t5 & 0x1) == 0)) {
                t14 = *(int *)((t3 + 0x14));
                if (t14 != 2) {
                    if (t14 != 4) {
                        if (t14 != 6) {
                        } else {
                            if (((*(int *)0x8C4607C0) == 0) && (a4 != 0)) {
                                kmiFLWCTRLStartDisplayEntry(t3);
                            }
                        }
                    } else {
                        if ((((*(int *)((t3 + 0x38))) != 0) && (a4 != 1)) || (t31 = *(int *)0x8C4607B4, t31 != 0)) {
                        } else {
                            t32 = kmiFLWCTRLStartRenderEntry();
                            if (t32 == 0) {
                                t2 = 0x1;
                            }
                        }
                    }
                } else {
                    kmiFLWCTRLStartDMAEntry();
                }
            }
            t3 = (*(int *)((t3 + 0x10)));
            if (t3 == 0) {
                break;
            }
        }
        kmiGuaranteeFFModeProcessOver(a4, t2);
        _builtin_set_imask(((unsigned int)(((t1 & 0xF) << 2) << 2) >> 4));
    }
    return 0x0;
}

int buFbrCreateFiber(int a4, int a5, int a6, int a7)
{
    int t1;
    int t14;
    int t3;
    int t4;
    int t5;
    int stk[47];
    int R1004;
    int R1008;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    R1008 = a5;
    R1004 = a6;
    memset((((int)stk + 4) + 0x8), 0x0, 0x98);
    t1 = *(int *)((a4 + 0x208));
    t14 = 0xFFFFFFFF;
    if ((*(int *)((a4 + 0x20C))) != t1) {
        t3 = t1;
        t4 = 0x0;
        t5 = (0x210 + a4);
        for (;;) {
            if ((*(int *)((t5 + 0xC))) == 0) {
                break;
            }
            t3 = 0x124;
            t4 = (t4 + 0x1);
            t5 = (t5 + t3);
        }
        *(unsigned int *)((t5 + 0x8)) = 0x0;
        *(unsigned int *)((t5 + 0xC)) = 0x1;
        *(unsigned int *)((t5 + 0x14)) = (*(int *)((a4 + 0x204)));
        *(unsigned int *)((t5 + 0x0)) = (R1004);
        *(unsigned int *)((t5 + 0x4)) = ((unsigned int)a7 >> 2);
        *(unsigned int *)((t5 + 0x118)) = 0x0;
        *(unsigned int *)((t5 + 0x10)) = 0x0;
        *(unsigned int *)((t5 + 0x11C)) = 0x0;
        memmove((t5 + 0x18), (0x104 + a4), 0x100);
        setjmp((((int)stk + 4) + 0x8));
        memmove((t5 + 0x18), (((int)stk + 4) + 0x8), 0x100);
        *(unsigned int *)((t5 + 0x18)) = (((((unsigned int)a7 >> 2) - 1) << 2) + (R1004));
        *(unsigned int *)((t5 + 0x20)) = (R1008);
        t14 = t4;
    }
    return t14;
}

int motionChange(int a4, int a5, int a6, int a7, int a8, float f4, float f5)
{
    int t5;
    int t7;
    int t1;
    int t29;
    int t8;
    int t21;
    int t23;

    if (((*(int *)0x8C2873C0) == 0) && (t1 = *(int *)((a4 + 0x20)), t1 == (a5 + a8))) {
    } else {
        if ((*(int *)0x8C2873C4) != 0) {
            t5 = 0x8C2871D8;
            t7 = a4;
            for (;;) { t8 = *(int *)t5; t5 = (t5 + 4); if ((unsigned int)((0x8C2871D8 + 480)) < (unsigned int)t5) break; *(unsigned int *)t7 = t8; t7 = (t7 + 4); }
        }
        if ((*(float *)((a4 + 0x4))) == 0.0f) {
            *(unsigned int *)((a4 + 0x1C)) = (*(int *)((a4 + 0x20)));
            *(float *)((a4 + 0x8)) = (*(float *)((a4 + 0xC)));
            *(float *)((a4 + 0x10)) = (*(float *)((a4 + 0x14)));
            *(unsigned int *)((a4 + 0x24)) = (*(int *)((a4 + 0x28)));
            *(unsigned int *)((a4 + 0x2C)) = (*(int *)((a4 + 0x30)));
            t21 = 0x50;
            t23 = (*(int *)((a4 + 0x54)));
        } else {
            *(unsigned int *)((a4 + 0x44)) = 0x1;
            t21 = 0x48;
            t23 = ((-(*(int *)((a4 + 0x48)))) + 0x1);
        }
        *(unsigned int *)((a4 + t21)) = t23;
        *(unsigned int *)((a4 + 0x54)) = a8;
        *(unsigned int *)((a4 + 0x20)) = (a5 + a8);
        *(float *)((a4 + 0xC)) = 0.0f;
        *(float *)((a4 + 0x14)) = f4;
        *(unsigned int *)((a4 + 0x28)) = a7;
        *(unsigned int *)((a4 + 0x30)) = (int)((float)(*(int *)(((a5 + a8) + 0x0))) / (*(float *)((((*(int *)((a4 + 0x20))) + 0xC) + 0x0))));
        *(float *)((a4 + 0x0)) = 0.0f;
        *(unsigned int *)((a4 + 0x18)) = 0x1;
        *(float *)((a4 + 0x4)) = (float)a6;
        *(unsigned int *)0x8C2873C4 = 0x1;
        t29 = 0x4;
    }
    return t29;
}

int sprRecPutRotated(int a4, int a5, int a6, int a7)
{
    int t1;
    int t2;
    int t3;
    int t26;
    int t29;
    int t18;
    int t19;
    int t20;
    int stk[14];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = (-a7);
    if ((int)(*(int *)(((int)stk + 4))) > 0) {
        t1 = 0x0;
        t2 = a4;
        t3 = a6;
        for (;;) {
            if (t1 != 0) {
                nlPushUnitMatrix();
                nlTranslate((*(float *)(((((int)stk + 4) + 0x8) + 0x0))), (*(float *)(((((int)stk + 4) + 0x8) + 0x4))), (*(float *)(((((int)stk + 4) + 0x8) + 0x8))));
                nlPushMatrix(0x0);
                nlRotateAZ(a7);
                nlCalcPoint(t3, t3);
                nlPopMatrix(0x1);
                nlPopMatrix(0x1);
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)(((((t1 << 1) + t1) << 2) + t3)); }
                t18 = a5;
                t19 = a6;
                t20 = a7;
            }
            *(float *)((t2 + 0x4)) = (*(float *)((t3 + 0x0)));
            *(float *)((t2 + 0x8)) = (*(float *)((t3 + 0x4)));
            *(float *)((t2 + 0xC)) = (*(float *)((t3 + 0x8)));
            *(unsigned int *)((t2 + 0x28)) = (*(int *)(((int)stk + 8)));
            t26 = nlSprPut(t2, t18, t19, t20);
            t1 = (t1 + 0x1);
            t2 = (t2 + 0x50);
            t3 = (t3 + 0xC);
            if ((int)t1 >= (int)(*(int *)(((int)stk + 4)))) {
                break;
            }
        }
        t29 = t26;
    }
    return t29;
}

int mwlRnaInsrtSlntDat(int a4)
{
    int t0;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;
    int t10;
    int t12;
    int t22;
    int t15;
    int t17;
    int t18;
    int t21;

    t0 = *(int *)((a4 + 0x28));
    t3 = *(int *)((a4 + 0x8));
    t4 = (int)((int)0x20 / (int)t3);
    t5 = (int)((int)((t0 - (*(int *)((a4 + 0x34)))) - (*(int *)((a4 + 0x54)))) / (int)((t4 << 2) << 1));
    t6 = *(int *)((a4 + 0x50));
    t7 = (t0 - t6);
    if ((int)(t5 * ((t4 << 2) << 1)) < (int)(t0 - t6)) {
        t7 = (t5 * ((t4 << 2) << 1));
    }
    t9 = (int)((int)0x800 / (int)t3);
    t10 = t7;
    if ((int)t7 >= (int)((t9 << 2) << 1)) {
        t10 = ((t9 << 2) << 1);
    }
    t12 = (int)((int)t10 / (int)((t4 << 2) << 1));
    t22 = 0x0;
    if ((int)(t12 * ((t4 << 2) << 1)) > 0) {
        t15 = 0x8C46DB0C;
        if ((*(int *)((a4 + 0x8))) == 4) {
            t15 = 0x8C46E32C;
        }
        t17 = t15;
        t18 = 0x0;
        for (;;) {
            if ((int)t18 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
                break;
            }
            t17 = a4;
            t21 = mwlRnaStartCopy(t17, t18, (*(int *)((a4 + 0x50))), ((t15 + 0x20) & 0xFFFFFFE0), (t12 * ((t4 << 2) << 1)));
            t18 = (t18 + 0x1);
            t17 = t21;
        }
        *(unsigned int *)((a4 + 0x58)) = t17;
        t22 = t17;
    }
    return t22;
}

int vmsfs_rewrite_exec_file(int a4, int a5, int a6, int a7, int a8)
{
    int t1;
    int t41;
    int t34;
    int t6;
    int t27;
    int t8;
    int t20;
    int t13;
    int t9;
    int t10;
    int t11;
    int t12;
    int stk[14];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x30)) = 0x1;
    *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x34)) = a8;
    t1 = vmsfs_fgetinfo(a4, (*(int *)(((int)stk + 4))), (((int)stk + 4) + 0x4));
    t41 = t1;
    if ((int)t1 >= 0) {
        t34 = 0xFFFFFF0B;
        if ((unsigned char)(*(signed char *)(((int)stk + 14))) == 1) {
            t6 = *(short *)(((int)stk + 12));
            t27 = 0xFFFFFF00;
            if (((unsigned int)a7 < (unsigned int)(unsigned short)t6) && (((unsigned int)a8 <= (unsigned int)(unsigned short)t6) && ((unsigned int)(a7 + a8) <= (unsigned int)(unsigned short)t6))) {
                t8 = check_file_correct(a4, (*(int *)(((int)stk + 4))));
                t20 = t8;
                if ((int)t8 >= 0) {
                    t13 = 0x0;
                    if ((unsigned int)0x0 < (unsigned int)a8) {
                        t9 = 0x0;
                        t10 = a6;
                        t11 = a7;
                        for (;;) {
                            t12 = vmsfs_write_retry(a4, t11, t10);
                            if ((int)t12 < 0) {
                                break;
                            }
                            t9 = (t9 + 0x1);
                            t10 = (t10 + 0x200);
                            t11 = (t11 + 0x1);
                            if ((unsigned int)t9 >= (unsigned int)a8) {
                                return 0x0;
                            }
                        }
                        t13 = t12;
                    }
                    t20 = t13;
                }
                t27 = t20;
            }
            t34 = t27;
        }
        t41 = t34;
    }
    return t41;
}

int _mult(int a4, int a5, int a6)
{
    int t1;
    int t15;
    int t6;
    int t7;
    int t2;
    int t13;
    int stk[16];
    int R1008;

    R1008 = *(int *)((int)stk + 8);

    R1008 = a4;
    memset(a6, 0x0, 0x10);
    t1 = 0x7;
    for (;;) {
        t15 = (short)t1;
        if ((unsigned char)(*(signed char *)((a5 + (short)t1))) != 0) {
            memset((((int)stk + 4) + 0x8), 0x0, 0x10);
            t2 = 0x7;
            for (;;) {
                t6 = *(signed char *)(((short)t2 + (R1008)));
                t7 = *(signed char *)(((short)t1 + a5));
                *(unsigned short *)(((int)stk + 4)) = (unsigned char)(*(signed char *)(((((short)t1 + (short)t2) + (((int)stk + 4) + 0x8)) + 0x1)));
                *(unsigned short *)(((int)stk + 4)) = ((*(short *)(((int)stk + 4))) + ((unsigned short)(unsigned char)t6 * (unsigned short)(unsigned char)t7));
                _mvsto2b((((short)t1 + (short)t2) + (((int)stk + 4) + 0x8)), ((int)stk + 4));
                t2 = (t2 - 1);
                if ((int)(short)t2 < 0) {
                    break;
                }
            }
            if ((short)t1 == 7) {
                t13 = (memmove(((short)t1 + a6), ((short)t1 + (((int)stk + 4) + 0x8)), 0x9));
            } else {
                t13 = (_add(((short)t1 + a6), ((short)t1 + (((int)stk + 4) + 0x8)), 0x9));
            }
            t15 = t13;
        }
        t1 = (t1 - 1);
        if ((int)(short)t1 < 0) {
            break;
        }
    }
    return t15;
}

int nlArcTan2(float f4, float f5)
{
    int t1;
    int t9;
    int t17;
    int t24;

    if (!(f4 > f5)) {
        if (!((-f4) > f5)) {
            if (f5 == 0.0f) {
                return 0x0;
            }
            return nlArcTan((f4 / f5));
        }
        t1 = 0xC000;
        if (f4 == 0.0f) {
        } else {
            t1 = (((-(nlArcTan((f5 / f4)))) + 0xC000) & 0xFFFF);
        }
        return t1;
    }
    if (!((-f4) > f5)) {
        t9 = 0x4000;
        if (f4 == 0.0f) {
        } else {
            t9 = (((-(nlArcTan((f5 / f4)))) + 0x4000) & 0xFFFF);
        }
        t24 = t9;
    } else {
        t17 = 0x8000;
        if (f5 == 0.0f) {
        } else {
            t17 = (((nlArcTan((f4 / f5))) + 0x8000) & 0xFFFF);
        }
        t24 = t17;
    }
    return t24;
}
