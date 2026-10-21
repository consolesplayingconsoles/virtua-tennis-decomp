/* Straight-line functions with calls and guards (batch gen_p): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXPD_EntrySte(int, int, int, int);
int ADXPD_Start(int);
int FUN_0c078a70(int, int, int);
int FUN_8c010976(int, int);
int FUN_8c015eea(float, float, float);
int FUN_8c02fca4(int, int, int, int);
int FUN_8c02fea4(int, int);
int FUN_8c08e654(int);
int FUN_8c0c51e0(int);
int FUN_8c0c533c(int);
int FUN_8c0d6e16(int, int);
int FUN_8c0de088(int, int, int, float, float, float);
int FUN_8c1e8124(void);
int FUN_8c1f3114(void);
int SJMEM_Unlock(int, int);
extern float _builtin_fipr(float *, float *);
extern void _builtin_ftrv(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
extern void _builtin_st_ext(float (*)[4]);
int fileLoadCloseSlot(int);
int fileLoadPollSlot(int);
int fileLoadStartSlot(int, int, int, int);
int kmyiInitializeDriverObject(int, int);
int memset(int, int, int);
int mwlRnaExecSvrHndl(int);
int nlArcTan(float);
int nlCalcPoint(int, int);
int nlLength(int, int);
int nlLoadMatrix(int);
int nlPushMatrix(int);
int nlScaleUnitVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlsndSeqRequest(int);
int ovLockCs_8c200114(int);
int ovUnlockCs_8c20012c(int);
int set_event(int, int);
void FUN_8c1003f0(int a4, int a5, int a6);
int FUN_8c0e6362(float f4);
int FUN_8c0eaa30(int a4, int a5);
int nlArcSin(float f4);
int FUN_8c0f31f0(int a4);
int kmytex_FBAllocEntry(void);
int FUN_8c0160e6(int a4, int a5, int a6);
int FUN_8c0da0d4(int a4, int a5, float f4);
int FUN_8c0dd9b0(void);
int FUN_8c0ebc20(void);
int FUN_8c0f7870(int a4);
int kmSetFogTable(int a4);
int mwRnaExecServer(void);
int FUN_8c0160a0(float f4, float f5, float f6, float f7);
int FUN_8c0176bc(int a4, int a5);
int FUN_8c0b141c(int a4);
int FUN_8c0d773c(int a4);
int SJUNI_GetNumData(int a4, int a5);
int FUN_8c0c5e40(int a4, int a5);
int FUN_8c0d93dc(void);
int FUN_8c087944(int a4);
int FUN_8c089280(int a4, int a5);
int FUN_8c0eb5b0(int a4);
void FUN_8c1e7936(void);
int FUN_8c0b0234(int a4, int a5, int a6, int a7);
float FUN_8c0ef9f0(int a4);
int nlPopMatrix(int a4);
int nlsndStreamStart(int a4);
int SJMEM_PutChunk(int a4, int a5, int a6);
int kmyWritePaletteDMA(void);
int syG2DmaSuspend(int a4);
int FUN_8c0134b6(int a4, int a5, int a6);
int FUN_8c0bd03a(int a4, int a5, int a6);
int FUN_8c0c4fac(void);
int FUN_8c0d1b20(void);
int FUN_8c100c54(int a4, int a5, int a6);
int _pd_peripheral_set_null(int a4);
int kmSetColorClampValue(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_8c1efa54(void);
void FUN_8c02fe4c(int a4);
void nlQuickInvertMatrix(void);
void FUN_8c01651a(int a4, int a5, int a6, int a7, int a8);
int kmyInitializeDriver(void);
int FUN_0c17472e(void);
int FUN_8c011ff0(int a4, int a5);
int nlFloor(float f4);
void FUN_8c0f1b10(int a4);
int FUN_8c1e2de4(int a4, int a5);
int get_data(int a4);
int FUN_8c013394(int a4, int a5, int a6);
int FUN_8c0eab50(void);
int ADXB_EvokeExpandSte(int a4, int a5);
int FUN_8c0131e4(void);
int FUN_8c0c5286(int a4);
int FUN_8c0c542c(int a4);
int FUN_8c0e8f08(int a4);
float FUN_8c0ef9b0(int a4);
float FUN_8c0f31b0(int a4, int a5, int a6);
int _pd_peripheral_error(int a4, int a5, int a6);

void FUN_8c1003f0(int a4, int a5, int a6)
{
    int t11;
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    if ((short)(0x8 - a6) != 0) {
        t11 = 0x0;
        if ((int)(a5 - 1) >= 0) {
            t0 = (a4 + (a5 - 1));
            t1 = (a5 - 1);
            t2 = 0x0;
            for (;;) {
                t3 = *(signed char *)((t0 + 0x0));
                t4 = *(signed char *)((t0 + 0x0));
                t1 = (t1 - 1);
                *(unsigned char *)((t0 + 0x0)) = (((int)(short)a6 >= 0) ? (t3 << ((short)a6 & 31)) : ((-(int)(short)a6 & 31) ? ((unsigned int)t3 >> (-(int)(short)a6 & 31)) : 0));
                t5 = *(signed char *)((t0 + 0x0));
                *(unsigned char *)((t0 + 0x0)) = (t5 | t2);
                t2 = (unsigned char)(t4 & (((int)(short)(0x8 - a6) >= 0) ? (0xFF << ((short)(0x8 - a6) & 31)) : ((-(int)(short)(0x8 - a6) & 31) ? ((int)0xFF >> (-(int)(short)(0x8 - a6) & 31)) : ((int)0xFF >> 31))));
                t2 = (((int)(-(short)(0x8 - a6)) >= 0) ? (t2 << ((-(short)(0x8 - a6)) & 31)) : ((-(int)(-(short)(0x8 - a6)) & 31) ? ((unsigned int)t2 >> (-(int)(-(short)(0x8 - a6)) & 31)) : 0));
                t0 = (t0 - 1);
                if ((int)t1 < 0) {
                    break;
                }
            }
            t11 = t2;
        }
        if ((unsigned char)t11 != 0) {
            return;
        }
        return;
    }
}

int FUN_8c0e6362(float f4)
{
    int t0;
    int t1;
    int t6;
    float u2;
    float u3;
    int t5;

    t0 = *(int *)0x8C20D124;
    t1 = (int)((int)t0 % (int)0x28);
    t6 = t1;
    if ((int)t1 < (int)0x1E) {
        u2 = *(float *)0x8C0E643C;
        u3 = *(float *)0x8C0E6440;
        FUN_8c015eea(u3, f4, u2);
        t5 = FUN_8c0de088(0x8C1D8658, 0x3, 0xFF000000, 1.0f, 1.0f, 1.0f);
        t6 = t5;
    }
    return t6;
}

int FUN_8c0eaa30(int a4, int a5)
{
    return ((int (*)(int, int, int, int))(0x8C0EAA90))((((int)(a4 & 0xF) >= 0) ? (0x1 << ((a4 & 0xF) & 31)) : ((-(int)(a4 & 0xF) & 31) ? ((int)0x1 >> (-(int)(a4 & 0xF) & 31)) : ((int)0x1 >> 31))), ((int)(a5 + 0xF) >> 4), ((((int)a4 >> 4) << 1) + 0x8C424204), 0x1);
}

int nlArcSin(float f4)
{
    if ((f4 < 0.0f ? -f4 : f4) > 1.0f) {
        if (!(f4 > 0.0f)) {
            return ((int (*)(float))(0x8C0ECC92))(f4);
        }
        return ((int (*)(float))(0x8C0ECC92))(f4);
    }
    if (_builtin_sqrtf((1.0f - (f4 * f4))) != 0.0f) {
        return nlArcTan((f4 / _builtin_sqrtf((1.0f - (f4 * f4)))));
    }
    if (f4 > 0.0f) {
        return ((int (*)(float))(0x8C0ECC92))(f4);
    }
    return ((int (*)(float))(0x8C0ECC90))(f4);
}

int FUN_8c0f31f0(int a4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;

    u0 = *(float *)((a4 + 0x4));
    u1 = *(float *)0x8C454C48;
    u2 = *(float *)((a4 + 0x8));
    u3 = *(float *)0x8C454C4C;
    u4 = *(float *)0x8C454C50;
    u5 = *(float *)((a4 + 0x0));
    u6 = *(float *)0x8C454C54;
    if (u5 > (u1 * u2)) {
        return ((int (*)(int, int, float, float, float, float, float, float))(0x8C0F3296))(a4, 0x2, u0, u5, (u3 * u2), (u4 * u2), (u1 * u2), (u6 * u2));
    }
    return ((int (*)(int, int, float, float, float, float, float, float))(0x8C0F3290))(a4, 0x0, u0, u5, (u3 * u2), (u4 * u2), (u1 * u2), (u6 * u2));
}

int kmytex_FBAllocEntry(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C20C9D0;
    if ((unsigned int)0x0 < (unsigned int)t0) {
        t1 = *(int *)0x8C20C9E8;
        t2 = *(short *)(((0x0 + t1) + 0x0));
        if (((unsigned short)t2 & 0x1) == 0) {
            t3 = *(int *)0x8C20C9E8;
            *(unsigned short *)(((t3 + 0x0) + 0x0)) = 0x1;
            t4 = *(int *)0x8C20C9E8;
            return (t4 + 0x0);
        }
        return ((int (*)(int, int, int, int))(0x8C1F92C0))(0x8C20C9C8, 0x0, 0x1, t0);
    }
    return ((int (*)(int, int, int, int))(0x8C1F92C6))(0x8C20C9C8, 0x0, 0x1, t0);
}

int FUN_8c0160e6(int a4, int a5, int a6)
{
    float u0;
    int t1;
    int t2;
    float u3;
    float u4;
    int t7;
    float u8;
    float u9;
    int t10;
    float u11;
    int t12;
    int stk[9] = {0};

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    u0 = *(float *)((a6 + 0x0));
    t1 = *(int *)(((int)stk + 12));
    t2 = *(int *)(((int)stk + 8));
    u3 = *(float *)((t1 + 0x0));
    u4 = *(float *)((t2 + 0x0));
    FUN_8c015eea(u4, u3, u0);
    nlCalcPoint(0x8C1016D4, (((int)stk + 4) + 0x10));
    t7 = *(int *)(((int)stk + 8));
    u8 = *(float *)(((int)stk + 20));
    *(float *)((t7 + 0x0)) = u8;
    u9 = *(float *)(((int)stk + 24));
    t10 = *(int *)(((int)stk + 12));
    *(float *)((t10 + 0x0)) = u9;
    u11 = *(float *)(((int)stk + 28));
    t12 = *(int *)(((int)stk + 16));
    *(float *)((t12 + 0x0)) = u11;
    return 0x18;
}

int FUN_8c0da0d4(int a4, int a5, float f4)
{
    int t0;
    float u1;
    float u2;
    float u3;

    t0 = FUN_8c010976(0x24, 0x8C0D9F74);
    u1 = *(float *)0x8C0DA2E8;
    u2 = *(float *)0x8C23D204;
    *(unsigned int *)((t0 + 0x18)) = (int)((f4 * u1) / u2);
    u3 = *(float *)0x8C23D204;
    *(unsigned int *)((t0 + 0x1C)) = (int)((f4 * u1) / u3);
    *(unsigned int *)((t0 + 0x14)) = a4;
    *(unsigned int *)((t0 + 0x20)) = a5;
    return 0x8;
}

int FUN_8c0dd9b0(void)
{
    *(unsigned int *)0x8C40C5D4 = 0x8B;
    *(unsigned int *)0x8C40C5FC = 0x0;
    *(float *)0x8C40C5D8 = 320.0f;
    *(float *)0x8C40C5DC = 240.0f;
    *(float *)0x8C40C5E0 = 1.0f;
    *(float *)0x8C40C5E4 = 1.0f;
    *(float *)0x8C40C5E8 = 1.0f;
    *(float *)0x8C40C5EC = 0.0f;
    *(float *)0x8C40C5F0 = 0.0f;
    *(float *)0x8C40C5F4 = 1.0f;
    *(float *)0x8C40C5F8 = 1.0f;
    *(float *)0x8C40C600 = 1.0f;
    *(unsigned int *)0x8C40C604 = 0xFFFFFFFF;
    *(unsigned int *)0x8C40C608 = 0xA;
    return 0x2C;
}

int FUN_8c0ebc20(void)
{
    int t0;
    float u1;

    _builtin_set_imask(0xE);
    t0 = *(signed char *)0xFFD80004;
    *(unsigned char *)0xFFD80004 = (0xFFFFFFFE & t0);
    *(unsigned char *)0xFFD80000 = 0x1;
    *(unsigned short *)0xFFD80010 = 0x2;
    *(unsigned int *)0xFFD80008 = 0xFFFFFFFF;
    *(unsigned int *)0xFFD8000C = 0xFFFFFFFF;
    *(unsigned char *)0xFFD80004 = (t0 | 0x1);
    u1 = *(float *)0x8C0EBD2C;
    *(float *)0x8C424490 = u1;
    _builtin_set_imask(0x0);
    *(unsigned int *)0x8C44F4AC = 0x1E;
    return 0x1E;
}

int FUN_8c0f7870(int a4)
{
    int t0;
    int t1;

    t0 = *(int *)((a4 + 0x0));
    if ((int)t0 >= 0) {
        t1 = *(int *)((a4 + 0x18));
        if (t1 != 0) {
            return ((int (*)(int, int, int))(0x8C0F78D0))((a4 + 0x18), 0xC0, 0x80);
        }
        return 0;
    }
    return 0;
}

int kmSetFogTable(int a4)
{
    float u0;
    int t1;
    int t2;
    float u3;
    int t4;
    int t5;

    u0 = *(float *)((a4 + 0x1FC));
    t1 = ((int)(u0 * 255.0f) & 0xFF);
    t2 = 0x80;
    for (;;) {
        t2 = (t2 - 1);
        u3 = *(float *)((a4 + (t2 << 2)));
        t4 = t1;
        t1 = (int)(u3 * 255.0f);
        t1 = (t1 & 0xFF);
        *(unsigned int *)(((t2 << 2) + 0x8C4707EC)) = (unsigned short)((t1 << 8) | t4);
        if (t2 == 0) {
            break;
        }
    }
    t5 = *(int *)0x8C4709EC;
    *(unsigned int *)0x8C4709EC = (t5 | 0x4);
    return 0x0;
}

int mwRnaExecServer(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t11;
    int t8;
    int t9;
    int stk[7] = {0};

    ovLockCs_8c200114(((int)stk + 4));
    t1 = 0x8C46D68C;
    t2 = 0x8C46D68C;
    t3 = 0x8C46D68C;
    t4 = 0x8C46D68C;
    for (;;) {
        t5 = *(signed char *)((t4 + 0x0));
        if ((unsigned char)t5 == 1) {
            t1 = t3;
            mwlRnaExecSvrHndl(t1);
        } else {
            t8 = t1;
            t9 = t2;
        }
        t4 = (t4 + 0x90);
        t1 = t8;
        t2 = t9;
        t3 = (t3 + 0x90);
        if ((unsigned int)t4 >= (unsigned int)0x8C46DB0C) {
            break;
        }
    }
    t11 = ovUnlockCs_8c20012c(((int)stk + 4));
    return t11;
}

int FUN_8c0160a0(float f4, float f5, float f6, float f7)
{
    float u0;
    float u2;
    float u3;
    int t5;
    int stk[14] = {0};

    *(float *)(((int)stk + 20)) = f5;
    *(float *)(((int)stk + 12)) = f6;
    *(float *)(((int)stk + 16)) = f7;
    u0 = *(float *)(((int)stk + 20));
    FUN_8c015eea(f4, 0.0f, u0);
    u2 = *(float *)(((int)stk + 16));
    u3 = *(float *)(((int)stk + 12));
    FUN_8c015eea(u3, 0.0f, u2);
    t5 = nlLength((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    return t5;
}

int FUN_8c0176bc(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x0)) = a5;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(float *)((a4 + 0x4)) = 320.0f;
    *(float *)((a4 + 0x8)) = 240.0f;
    *(float *)((a4 + 0xC)) = 1.0f;
    *(float *)((a4 + 0x18)) = 0.0f;
    *(float *)((a4 + 0x1C)) = 0.0f;
    *(float *)((a4 + 0x20)) = 1.0f;
    *(float *)((a4 + 0x24)) = 1.0f;
    *(float *)((a4 + 0x10)) = 1.0f;
    *(float *)((a4 + 0x14)) = 1.0f;
    *(float *)((a4 + 0x2C)) = 1.0f;
    *(unsigned int *)((a4 + 0x30)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x38)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0x3C)) = 0x0;
    return 0x2C;
}

int FUN_8c0b141c(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)(((a4 << 2) + 0x8C29B898));
    t1 = *(int *)((t0 + 0x8));
    if ((t1 & 0x10) == 0) {
        if ((0x20 & t1) == 0) {
            if ((0x40 & t1) == 0) {
                if ((0x80 & t1) == 0) {
                    t2 = *(int *)((t0 + 0x10));
                    if ((t2 & 0x10) == 0) {
                        t3 = *(int *)((t0 + 0x10));
                        if ((t3 & 32) == 0) {
                            t4 = *(int *)((t0 + 0x10));
                            if ((t4 & 64) == 0) {
                                t5 = *(int *)((t0 + 0x10));
                                if ((t5 & 128) != 0) {
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x1;
                    }
                    return 0x1;
                }
                return 0x1;
            }
            return 0x1;
        }
        return 0x1;
    }
    return 0x1;
}

int FUN_8c0d773c(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)((((a4 * 0xD78) + 0x8C287D84) + 0xC58));
    if ((int)t0 <= (int)0x11) {
        t1 = *(int *)0x8C1891E8;
        t2 = *(int *)((0x8C1D4770 + (t1 << 2)));
        t3 = *(int *)(((0xC58 + ((a4 * 0xD78) + 0x8C287D84)) + 0x0));
        t4 = *(int *)((((t3 << 2) + (0x8C125FB8 + (((((t2 << 2) << 1) + t2) << 2) << 1))) + 0x0));
        return FUN_8c0d6e16(0x9, t4);
    }
    return 0xC58;
}

int SJUNI_GetNumData(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;

    if ((int)a5 >= 0) {
        if ((int)a5 >= (int)0x4) {
            t0 = *(int *)((a4 + 0x28));
            if (t0 != 0) {
                t1 = *(int *)((a4 + 0x28));
                t2 = *(int *)((a4 + 0x2C));
                t3 = ((int (*)(int, int))(t1))(t2, 0xFFFFFFFD);
            }
            return 0x0;
        }
        t10 = (a4 + 0x18);
        t11 = ((a5 << 2) + (a4 + 0x18));
        t12 = 0x0;
        for (;;) {
            t13 = *(int *)((t11 + 0x0));
            t11 = t13;
            if (t11 == 0) {
                break;
            }
            t14 = *(int *)((t11 + 0xC));
            t10 = t14;
            t12 = (t12 + t10);
        }
        return t12;
    }
    t15 = *(int *)((a4 + 0x28));
    if (t15 != 0) {
        t16 = *(int *)((a4 + 0x28));
        t17 = *(int *)((a4 + 0x2C));
        t18 = ((int (*)(int, int))(t16))(t17, 0xFFFFFFFD);
    }
    return 0x0;
}

int FUN_8c0c5e40(int a4, int a5)
{
    int t0;
    int t1;

    *(unsigned int *)(((a4 << 2) + 0x8C3438D8)) = 0x1;
    t0 = 0x0;
    t1 = ((a4 * 0x70) + 0x8C1AF8A4);
    for (;;) {
        t0 = (t0 + 0x1);
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        t1 = (t1 + 0x4);
        if ((int)t0 >= (int)0x1C) {
            break;
        }
    }
    *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0x8C37DA58) + 0x0)) = 0xFFFFFFFF;
    *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0x8C37DA58) + 0x4)) = 0xFFFFFFFF;
    *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0x8C37DA58) + 0x8)) = a5;
    *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0x8C37DA58) + 0xC)) = 0x0;
    *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0x8C37DA58) + 0x10)) = 0x1;
    return 0x1C;
}

int FUN_8c0d93dc(void)
{
    int t0;
    int t1;
    int t12;
    int t2;
    int t5;
    int t3;
    float u4;
    int t19;
    int t22;
    int t20;
    float u21;
    int t29;

    t0 = *(int *)0x8C20D14C;
    if (t0 == 6) {
        t1 = *(int *)0x8C287D5C;
        t12 = t1;
        if (t1 != 3) {
            t2 = *(int *)0x8C40C284;
            t5 = t2;
            if (t2 != 1) {
                t3 = set_event(0x18, 0x8C0D9308);
                *(unsigned int *)0x8C40C27C = t3;
                *(unsigned int *)0x8C40C284 = 0x1;
                u4 = *(float *)0x8C23D204;
                *(unsigned int *)((t3 + 0x14)) = (int)(20.0f / u4);
                t5 = t3;
            }
            t12 = t5;
        }
        t29 = t12;
    } else {
        t19 = *(int *)0x8C40C284;
        t22 = t19;
        if (t19 != 1) {
            t20 = set_event(0x18, 0x8C0D9308);
            *(unsigned int *)0x8C40C27C = t20;
            *(unsigned int *)0x8C40C284 = 0x1;
            u21 = *(float *)0x8C23D204;
            *(unsigned int *)((t20 + 0x14)) = (int)(20.0f / u21);
            t22 = t20;
        }
        t29 = t22;
    }
    return t29;
}

int FUN_8c087944(int a4)
{
    int t0;

    t0 = set_event(0x1C, 0x8C08785E);
    *(unsigned int *)((t0 + 0x14)) = 0x0;
    *(float *)((t0 + 0x18)) = 90.0f;
    *(unsigned int *)0x8C301BD8 = (0x41A + a4);
    *(unsigned int *)0x8C301BDC = (0x460 + a4);
    *(unsigned int *)0x8C301BE0 = (0x4B0 + a4);
    *(unsigned int *)0x8C301BE4 = (a4 + 0x53C);
    return 0x18;
}

int FUN_8c089280(int a4, int a5)
{
    int t0;
    int t1;

    *(unsigned int *)(((((a5 + 0x4B) * 0x270) + 0x8C34B4F4) + 0x268)) = 0x0;
    *(unsigned int *)(((((a5 + 0x4B) * 0x270) + 0x8C34B4F4) + 0x26C)) = 0x0;
    t0 = set_event(0x20, 0x8C0891EC);
    *(unsigned int *)((t0 + 0x14)) = 0x0;
    t1 = *(int *)((a4 + 0xC58));
    *(unsigned int *)((t0 + 0x1C)) = t1;
    *(unsigned int *)((t0 + 0x18)) = (a5 + 0x4B);
    return 0xC58;
}

int FUN_8c0eb5b0(int a4)
{
    if (a4 != 0) {
        if (a4 != 2) {
            if (a4 != 4) {
                return ((int (*)(int, int))(0x8C0EB5F2))(a4, 0x0);
            }
            return ((int (*)(int, int))(0x8C0EB5F2))(a4, 0x0);
        }
        return ((int (*)(int, int))(0x8C0EB5F2))(a4, 0x0);
    }
    return ((int (*)(int, int))(0x8C0EB5F2))(a4, 0x0);
}

void FUN_8c1e7936(void)
{
    int t0;
    int t2;
    int t3;
    int stk[4] = {0};

    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t0 = _builtin_get_imask();
    *(unsigned short *)(((int)stk + 4)) = t0;
    _builtin_set_imask(0xF);
    FUN_8c1e8124();
    t2 = *(int *)(((int)stk + 8));
    *(unsigned int *)0xFF00001C = t2;
    t3 = *(short *)(((int)stk + 4));
    _builtin_set_imask(((unsigned int)(((t3 & 0xF) << 2) << 2) >> 4));
}

int FUN_8c0b0234(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)(((0x8C343264 + (a4 * 0x38)) + 0x0)) = a5;
    *(unsigned int *)(((0x8C343264 + (a4 * 0x38)) + 0x4)) = a7;
    *(unsigned int *)(((0x8C343264 + (a4 * 0x38)) + 0x8)) = a6;
    *(unsigned int *)(((0x8C343264 + (a4 * 0x38)) + 0x30)) = 0xFFFFFFFF;
    *(unsigned int *)((((a4 * 0x38) + 0x8C343264) + 0x34)) = 0xFFFFFFFF;
    *(unsigned int *)((((a4 << 2) + 0x8C343724) + 0x0)) = 0x0;
    return ((a4 * 0x38) + 0x8C343264);
}

float FUN_8c0ef9f0(int a4)
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
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16[16];
    float u17[4];
    float u18[16];
    float u19[16];
    float u20[4];
    float u21[16];
    float u22[4];
    float u23[16];
    float u24[4];
    float u25[16];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x4) + 0x0));
    u2 = *(float *)((((a4 + 0x4) + 0x4) + 0x0));
    u3 = *(float *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x0));
    u4 = *(float *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u5 = *(float *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u6 = *(float *)((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u7 = *(float *)(((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u8 = *(float *)((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u9 = *(float *)(((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u10 = *(float *)((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u11 = *(float *)(((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u12 = *(float *)((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u13 = *(float *)(((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u14 = *(float *)((((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u15 = *(float *)(((((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u16[0] = u0;
    u16[1] = u1;
    u16[2] = u2;
    u16[3] = u3;
    u16[4] = u4;
    u16[5] = u5;
    u16[6] = u6;
    u16[7] = u7;
    u16[8] = u8;
    u16[9] = u9;
    u16[10] = u10;
    u16[11] = u11;
    u16[12] = u12;
    u16[13] = u13;
    u16[14] = u14;
    u16[15] = u15;
    _builtin_st_ext((float (*)[4])u18);
    u17[0] = u18[0];
    u17[1] = u18[1];
    u17[2] = u18[2];
    u17[3] = u18[3];
    _builtin_ld_ext((float (*)[4])u16);
    _builtin_ftrv(u17, u17);
    u19[0] = u0;
    u19[1] = u1;
    u19[2] = u2;
    u19[3] = u3;
    u19[4] = u4;
    u19[5] = u5;
    u19[6] = u6;
    u19[7] = u7;
    u19[8] = u8;
    u19[9] = u9;
    u19[10] = u10;
    u19[11] = u11;
    u19[12] = u12;
    u19[13] = u13;
    u19[14] = u14;
    u19[15] = u15;
    u20[0] = u18[4];
    u20[1] = u18[5];
    u20[2] = u18[6];
    u20[3] = u18[7];
    _builtin_ld_ext((float (*)[4])u19);
    _builtin_ftrv(u20, u20);
    u21[0] = u0;
    u21[1] = u1;
    u21[2] = u2;
    u21[3] = u3;
    u21[4] = u4;
    u21[5] = u5;
    u21[6] = u6;
    u21[7] = u7;
    u21[8] = u8;
    u21[9] = u9;
    u21[10] = u10;
    u21[11] = u11;
    u21[12] = u12;
    u21[13] = u13;
    u21[14] = u14;
    u21[15] = u15;
    u22[0] = u18[8];
    u22[1] = u18[9];
    u22[2] = u18[10];
    u22[3] = u18[11];
    _builtin_ld_ext((float (*)[4])u21);
    _builtin_ftrv(u22, u22);
    u23[0] = u0;
    u23[1] = u1;
    u23[2] = u2;
    u23[3] = u3;
    u23[4] = u4;
    u23[5] = u5;
    u23[6] = u6;
    u23[7] = u7;
    u23[8] = u8;
    u23[9] = u9;
    u23[10] = u10;
    u23[11] = u11;
    u23[12] = u12;
    u23[13] = u13;
    u23[14] = u14;
    u23[15] = u15;
    u24[0] = u18[12];
    u24[1] = u18[13];
    u24[2] = u18[14];
    u24[3] = u18[15];
    _builtin_ld_ext((float (*)[4])u23);
    _builtin_ftrv(u24, u24);
    _builtin_st_ext((float (*)[4])u25);
    u25[0] = u17[0];
    u25[1] = u17[1];
    u25[2] = u17[2];
    u25[3] = u17[3];
    u25[4] = u20[0];
    u25[5] = u20[1];
    u25[6] = u20[2];
    u25[7] = u20[3];
    u25[8] = u22[0];
    u25[9] = u22[1];
    u25[10] = u22[2];
    u25[11] = u22[3];
    u25[12] = u24[0];
    u25[13] = u24[1];
    u25[14] = u24[2];
    u25[15] = u24[3];
    _builtin_ld_ext((float (*)[4])u25);
    return u0;
}

int nlPopMatrix(int a4)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t6;
    float u8;
    float u9;
    float u11;
    float u12;
    float u14;
    float u15;
    float u17;
    float u18;
    float u20;
    float u21;
    float u23;
    float u24;
    float u26;
    float u27;
    float u29;
    float u30;
    float u10[16];
    float u13[16];
    float u16[16];
    float u19[16];
    float u22[16];
    float u25[16];
    float u28[16];
    float u31[16];

    t0 = a4;
    if ((int)a4 <= 0) {
        t0 = 0x1;
    }
    t2 = *(short *)0x8C45085C;
    t3 = *(short *)0x8C45085E;
    t4 = (t2 - t0);
    if ((int)t2 < (int)t0) {
        t4 = 0x0;
    }
    t6 = *(int *)0x8C450860;
    *(unsigned short *)0x8C45085C = t4;
    if ((int)t4 < (int)t3) {
        *(unsigned int *)0x8C450864 = (t6 + ((unsigned int)(t4 << 8) >> 2));
    }
    u8 = *(float *)(((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x0));
    u9 = *(float *)((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u10);
    u10[0] = u9;
    u10[1] = u8;
    _builtin_ld_ext((float (*)[4])u10);
    u11 = *(float *)((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x0));
    u12 = *(float *)(((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u13);
    u13[2] = u12;
    u13[3] = u11;
    _builtin_ld_ext((float (*)[4])u13);
    u14 = *(float *)(((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x0));
    u15 = *(float *)((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u16);
    u16[4] = u15;
    u16[5] = u14;
    _builtin_ld_ext((float (*)[4])u16);
    u17 = *(float *)((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x0));
    u18 = *(float *)(((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u19);
    u19[6] = u18;
    u19[7] = u17;
    _builtin_ld_ext((float (*)[4])u19);
    u20 = *(float *)(((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u21 = *(float *)((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u22);
    u22[8] = u21;
    u22[9] = u20;
    _builtin_ld_ext((float (*)[4])u22);
    u23 = *(float *)((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u24 = *(float *)(((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u25);
    u25[10] = u24;
    u25[11] = u23;
    _builtin_ld_ext((float (*)[4])u25);
    u26 = *(float *)(((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u27 = *(float *)((((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u28);
    u28[12] = u27;
    u28[13] = u26;
    _builtin_ld_ext((float (*)[4])u28);
    u29 = *(float *)((((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u30 = *(float *)(((((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u31);
    u31[14] = u30;
    u31[15] = u29;
    _builtin_ld_ext((float (*)[4])u31);
    return ((((int)t2 >= (int)t0)) ? 1 : 0);
}

int nlsndStreamStart(int a4)
{
    int t0;
    int t8;
    int t1;
    int t3;

    t0 = *(signed char *)((0x8C454CF4 + ((short)a4 * (short)0x1C)));
    t8 = t0;
    if (t0 == 1) {
        t1 = *(signed char *)(((((short)a4 * (short)0x1C) + 0x8C454CF4) + 0x1));
        t3 = t1;
        if (t1 == 0) {
            nlsndSeqRequest((((((short)a4 << 8) << 2) << 2) + 0x1A1));
            *(unsigned char *)(((((short)a4 * (short)0x1C) + 0x8C454CF4) + 0x1)) = 0x1;
            t3 = 0x1;
        }
        t8 = t3;
    }
    return t8;
}

int SJMEM_PutChunk(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = FUN_8c1f3114();
    if (a5 != 0) {
        if (a5 != 1) {
            *(unsigned int *)((a6 + 0x4)) = 0x0;
            *(unsigned int *)((a6 + 0x0)) = 0x0;
            t1 = *(int *)((a4 + 0x1C));
            if (t1 != 0) {
                t2 = *(int *)((a4 + 0x1C));
                t3 = *(int *)((a4 + 0x20));
                t4 = ((int (*)(int, int))(t2))(t3, 0xFFFFFFFD);
            }
        }
    }
    return SJMEM_Unlock(a4, t0);
}

int kmyWritePaletteDMA(void)
{
    return 0xEEEE;
}

int syG2DmaSuspend(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t1 = *(int *)((a4 + 0x0));
    t2 = *(int *)0x8C20CA24;
    t3 = *(int *)((t2 + 0x0));
    *(unsigned int *)((((((t1 << 2) << 2) << 1) + t3) + 0x1C)) = 0x1;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return 0x0;
}

int FUN_8c0134b6(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t1;
    int t4;
    int t6;
    int t5;

    t0 = *(int *)(((((a4 * 0x1F0) + 0x8C285E4C) + ((((a5 << 1) + a5) << 2) << 1)) + 0x4));
    t2 = a6;
    if ((int)a6 < (int)t0) {
        t1 = *(int *)(((((a4 * 0x1F0) + 0x8C285E4C) + ((((a5 << 1) + a5) << 2) << 1)) + 0x4));
        t2 = t1;
    }
    t4 = *(int *)(((((a4 * 0x1F0) + 0x8C285E4C) + ((((a5 << 1) + a5) << 2) << 1)) + 0x8));
    t6 = t2;
    if ((int)t2 > (int)t4) {
        t5 = *(int *)(((((a4 * 0x1F0) + 0x8C285E4C) + ((((a5 << 1) + a5) << 2) << 1)) + 0x8));
        t6 = t5;
    }
    *(unsigned int *)(((((((a5 << 1) + a5) << 2) << 1) + ((a4 * 0x1F0) + 0x8C285E4C)) + 0x0)) = t6;
    return (((((a5 << 1) + a5) << 2) << 1) + ((a4 * 0x1F0) + 0x8C285E4C));
}

int FUN_8c0bd03a(int a4, int a5, int a6)
{
    int t0;
    float u1;
    int t2;

    t0 = *(int *)(((a4 + (((a5 << 1) + a5) << 2)) + 0x0));
    u1 = *(float *)(((a4 + (((a5 << 1) + a5) << 2)) + 0x8));
    t2 = *(int *)(((a4 + (((a5 << 1) + a5) << 2)) + 0x4));
    *(unsigned int *)(((a4 + (((a6 << 1) + a6) << 2)) + 0x0)) = t0;
    *(float *)(((a4 + (((a6 << 1) + a6) << 2)) + 0x8)) = u1;
    *(unsigned int *)((((((a6 << 1) + a6) << 2) + a4) + 0x4)) = t2;
    return 0x8;
}

int FUN_8c0c4fac(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;

    t0 = *(int *)0x8C1AED0C;
    if (t0 == 0) {
        t1 = 0x0;
        t2 = 0x8C124808;
        for (;;) {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            FUN_8c08e654(t3);
            t1 = (t1 + 0x1);
            if ((unsigned int)t1 >= (unsigned int)0x7) {
                break;
            }
        }
        t5 = *(int *)0x8C1AED0C;
        *(unsigned int *)0x8C1AED0C = (t5 + 0x1);
    }
    return ((int (*)(void))(0x8C0C4BF0))();
}

int FUN_8c0d1b20(void)
{
    int t0;
    int t1;
    float u2;
    float u3;
    int t5;

    t0 = *(int *)0x8C38BA70;
    if (t0 != 0) {
        t1 = *(int *)0x8C38BA74;
        if (t1 != 0) {
            u2 = *(float *)0x8C291F60;
            u3 = (-u2);
            if (!(0.0f > u2)) {
                u3 = u2;
            }
            t5 = 0x301A9;
            if (!(0.200000003f > u3)) {
                t5 = 0x101A9;
            }
            return nlsndSeqRequest(t5);
        }
        return 0;
    }
    return 0;
}

int FUN_8c100c54(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t8;

    if ((int)(a6 - 1) >= 0) {
        t0 = (a4 + (a6 - 1));
        t1 = (a5 + (a6 - 1));
        t2 = (a6 - 1);
        t3 = 0x0;
        for (;;) {
            t4 = *(signed char *)((t1 + 0x0));
            t5 = *(signed char *)((t0 + 0x0));
            *(unsigned char *)((t0 + 0x0)) = (((unsigned char)t5 + (unsigned char)t4) + t3);
            t6 = (int)((int)(((unsigned char)t5 + (unsigned char)t4) + t3) / (int)0x100);
            t2 = (t2 - 1);
            t3 = t6;
            t1 = (t1 - 1);
            t0 = (t0 - 1);
            if ((int)t2 < 0) {
                break;
            }
        }
        t8 = t6;
    }
    return t8;
}

int _pd_peripheral_set_null(int a4)
{
    int t0;

    *(unsigned int *)((a4 + 0x0)) = 0x0;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    t0 = *(int *)0x8C45A6AC;
    if (t0 == 0) {
        *(unsigned int *)((a4 + 0x8)) = 0x0;
        *(unsigned int *)((a4 + 0xC)) = 0xFFFFFFFF;
        *(unsigned int *)((a4 + 0x10)) = 0x0;
        *(unsigned int *)((a4 + 0x14)) = 0x0;
    } else {
        *(unsigned int *)((a4 + 0x8)) = 0xFFFFFFFF;
        *(unsigned int *)((a4 + 0xC)) = 0x0;
        *(unsigned int *)((a4 + 0x10)) = 0xFFFFFFFF;
        *(unsigned int *)((a4 + 0x14)) = 0xFFFFFFFF;
    }
    *(unsigned short *)((a4 + 0x18)) = 0x0;
    *(unsigned short *)((a4 + 0x1A)) = 0x0;
    *(unsigned short *)((a4 + 0x22)) = 0x0;
    *(unsigned short *)((a4 + 0x20)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(unsigned int *)((a4 + 0x24)) = 0x8C20967C;
    return 0x0;
}

int kmSetColorClampValue(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C471E18;
    *(unsigned int *)0x8C471E18 = ((t0 | 0x10) | 0x20);
    *(unsigned int *)0x8C471E3C = a8;
    *(unsigned int *)0x8C471E40 = a9;
    t1 = *(int *)0x8C471E1C;
    *(unsigned int *)0x8C471E1C = (t1 | 0x20);
    return ((int (*)(int, int, int, int))(0x8C1E63D0))(0x8C471E18, 0x20, 0x8, 0x1);
}

int FUN_8c1efa54(void)
{
    int t0;
    int t1;
    int t5;
    int t2;

    t0 = *(int *)0x8C20C890;
    if (t0 == 0) {
        t1 = memset(0x8C46ABA4, 0x0, 0x180);
        t2 = t1;
    }
    t5 = *(int *)0x8C20C890;
    *(unsigned int *)0x8C20C890 = (t5 + 0x1);
    return t2;
}

void FUN_8c02fe4c(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t6;
    int t7;
    int t8;
    int stk[12] = {0};

    *(unsigned int *)(((int)stk + 16)) = a4;
    t0 = *(int *)((a4 + 0x8));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t0;
    t1 = *(int *)((a4 + 0x4));
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t1;
    t2 = *(int *)((a4 + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t2;
    FUN_8c02fea4(0x8C2FBC04, (((int)stk + 4) + 0x10));
    t4 = *(int *)0x8C2FBC44;
    FUN_8c02fca4(t4, 0x8C2FBBF8, (((int)stk + 4) + 0x10), 0x1);
    t6 = *(int *)(((((int)stk + 4) + 0x10) + 0x8));
    *(unsigned int *)0x8C2FBC00 = t6;
    t7 = *(int *)(((((int)stk + 4) + 0x10) + 0x4));
    *(unsigned int *)0x8C2FBBFC = t7;
    t8 = *(int *)(((((int)stk + 4) + 0x10) + 0x0));
    *(unsigned int *)0x8C2FBBF8 = t8;
}

void nlQuickInvertMatrix(void)
{
    float u1;
    float u4;
    float u7;
    int t8;
    float u11;
    float u12;
    int t13;
    float u14;
    int t15;
    float u0[16];
    float u2[4];
    float u3[4];
    float u5[4];
    float u6[4];
    float u9[4];
    float u10[4];
    float u16[16];

    _builtin_st_ext((float (*)[4])u0);
    u1 = u0[1];
    u2[0] = u0[12];
    u2[1] = u0[13];
    u2[2] = u0[14];
    u2[3] = 1.0f;
    u3[0] = u0[0];
    u3[1] = u0[1];
    u3[2] = u0[2];
    u3[3] = 0.0f;
    u4 = _builtin_fipr(u2, u3);
    u5[0] = u0[12];
    u5[1] = u0[13];
    u5[2] = u0[14];
    u5[3] = 1.0f;
    u6[0] = u0[4];
    u6[1] = u0[5];
    u6[2] = u0[6];
    u6[3] = 0.0f;
    u7 = _builtin_fipr(u5, u6);
    t8 = (*(int *)&u1);
    u9[0] = u0[12];
    u9[1] = u0[13];
    u9[2] = u0[14];
    u9[3] = 1.0f;
    u10[0] = u0[8];
    u10[1] = u0[9];
    u10[2] = u0[10];
    u10[3] = (u0[11] - u0[11]);
    u11 = _builtin_fipr(u9, u10);
    u12 = u0[2];
    t13 = (*(int *)&u12);
    u14 = u0[6];
    t15 = (*(int *)&u14);
    _builtin_st_ext((float (*)[4])u16);
    u16[0] = u0[0];
    u16[1] = u0[4];
    u16[2] = u0[8];
    u16[3] = (u4 - u4);
    u16[4] = (*(float *)&t8);
    u16[5] = u0[5];
    u16[6] = u0[9];
    u16[7] = (u7 - u7);
    u16[8] = (*(float *)&t13);
    u16[9] = (*(float *)&t15);
    u16[10] = u0[10];
    u16[11] = (u11 - u11);
    u16[12] = (0.0f - u4);
    u16[13] = (0.0f - u7);
    u16[14] = ((u0[14] - u0[14]) - u11);
    u16[15] = 1.0f;
    _builtin_ld_ext((float (*)[4])u16);
}

void FUN_8c01651a(int a4, int a5, int a6, int a7, int a8)
{
    int t4;
    int t5;
    int t6;
    int stk[6] = {0};

    nlPushMatrix(0x0);
    nlLoadMatrix(0x8C287978);
    FUN_8c0160e6(((int)stk + 4), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x8));
    nlPopMatrix(0x1);
    t4 = *(int *)((((int)stk + 4) + 0x8));
    *(unsigned int *)((a8 + 0x8)) = t4;
    t5 = *(int *)((((int)stk + 4) + 0x4));
    *(unsigned int *)((a8 + 0x4)) = t5;
    t6 = *(int *)((((int)stk + 4) + 0x0));
    *(unsigned int *)((a8 + 0x0)) = t6;
}

int kmyInitializeDriver(void)
{
    int t1;
    int t2;
    int t3;
    int t4;

    kmyiInitializeDriverObject(0x8C4743D8, 0x8C4743F0);
    *(unsigned int *)0x8C45EE20 = 0x8C1F78A6;
    t1 = *(int *)0x8C4743EC;
    t2 = ((int (*)(int, int, int))(t1))(0x8C4743D8, 0x8C45EE14, 0x8C45EE2C);
    *(unsigned int *)0x8C470D00 = 0x8C1F85B2;
    t3 = *(int *)0x8C4743EC;
    t4 = ((int (*)(int, int, int))(t3))(0x8C4743D8, 0x8C470CF4, 0x8C470D0C);
    return 0x0;
}

int FUN_0c17472e(void)
{
    int t0;
    int t1;
    int t2;
    int t9;
    int t10;
    int t11;
    int t16;
    int t7;
    int t3;

    t0 = *(int *)0x8C47647C;
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            t1 = *(int *)0x8C476474;
            t2 = *(signed char *)(((t1 + 0x1C) + 0x0));
            if (((unsigned char)t2 & 0x4) == 4) {
                t3 = 0xD;
            }
            t7 = t3;
        }
        t16 = t7;
    } else {
        t9 = *(int *)0x8C476478;
        for (;;) {
            t10 = *(short *)((t9 + 0x1C));
            if ((unsigned char)t10 != 0) {
                break;
            }
        }
        t11 = *(signed char *)(((t9 + 0x14) + 0x0));
        t16 = t11;
    }
    return t16;
}

int FUN_8c011ff0(int a4, int a5)
{
    int t0;
    float u2;
    int t4;
    int t5;
    int t6;
    int stk[7] = {0};

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    t0 = *(int *)(((int)stk + 4));
    nlSubVector3op((((int)stk + 4) + 0x8), t0, 0x8C2859E8);
    u2 = *(float *)0x8C2859D8;
    nlScaleUnitVector((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x8), u2);
    t4 = *(int *)(((int)stk + 4));
    t5 = *(int *)(((int)stk + 8));
    t6 = FUN_0c078a70(t5, t4, (((int)stk + 4) + 0x8));
    return t6;
}

int nlFloor(float f4)
{
    float u0;

    u0 = *(float *)0x8C0ED0E8;
    if (u0 > (f4 < 0.0f ? -f4 : f4)) {
        if (0.0f > f4) {
            if (((f4 < 0.0f ? -f4 : f4) - (float)(int)(f4 < 0.0f ? -f4 : f4)) != 0.0f) {
                return 0x8C0ED0E8;
            }
            return 0x8C0ED0E8;
        }
        return ((int (*)(int, float, float, float))(0x8C0ED000))((int)(f4 < 0.0f ? -f4 : f4), f4, (f4 < 0.0f ? -f4 : f4), (float)(int)(f4 < 0.0f ? -f4 : f4));
    }
    return 0x8C0ED0E8;
}

void FUN_8c0f1b10(int a4)
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
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16[16];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x4) + 0x0));
    u2 = *(float *)((((a4 + 0x4) + 0x8) + 0x0));
    u3 = *(float *)((((a4 + 0x4) + 0x8) + 0x0));
    u4 = *(float *)(((((a4 + 0x4) + 0x8) + 0x4) + 0x0));
    u5 = *(float *)((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x0));
    u6 = *(float *)(((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u7 = *(float *)(((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u8 = *(float *)((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x0));
    u9 = *(float *)(((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x0));
    u10 = *(float *)((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u11 = *(float *)((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u12 = *(float *)(((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x0));
    u13 = *(float *)((((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x0));
    u14 = *(float *)(((((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u15 = *(float *)(((((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    _builtin_st_ext((float (*)[4])u16);
    u16[0] = u3;
    u16[1] = u0;
    u16[2] = u1;
    u16[3] = (-u2);
    u16[4] = u7;
    u16[5] = u4;
    u16[6] = u5;
    u16[7] = (-u6);
    u16[8] = u11;
    u16[9] = u8;
    u16[10] = u9;
    u16[11] = (-u10);
    u16[12] = u15;
    u16[13] = u12;
    u16[14] = u13;
    u16[15] = (-u14);
    _builtin_ld_ext((float (*)[4])u16);
}

int FUN_8c1e2de4(int a4, int a5)
{
    int t0;
    int t3;
    int t4;
    int t12;
    int t5;
    int t6;
    int t7;
    int t8;

    t0 = *(int *)0x8C20C9E0;
    if ((unsigned int)a4 < (unsigned int)t0) {
        *(unsigned short *)((a5 + 0x0)) = 0x0;
    } else {
        *(unsigned short *)((a5 + 0x0)) = 0x1;
    }
    t3 = *(short *)((a5 + 0x0));
    t4 = *(int *)((((t3 << 2) << 2) + 0x8C20C9EC));
    t12 = 0x0;
    if (t4 != 0) {
        t5 = t4;
        t6 = 0x0;
        for (;;) {
            t7 = *(int *)((t5 + 0xC));
            if (t7 == a4) {
                t6 = t5;
                t5 = 0x0;
            } else {
                t8 = *(int *)((t5 + 0x8));
                t5 = t8;
            }
            if (t5 == 0) {
                break;
            }
        }
        t12 = t6;
    }
    return t12;
}

int get_data(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = *(signed char *)((a4 + 0x7));
    if ((unsigned char)t0 == 1) {
        t1 = *(signed char *)((a4 + 0x8));
        if ((unsigned char)t1 == 5) {
            *(unsigned char *)((a4 + 0x0)) = 0x1;
            return ((int (*)(int, int, int))(0x8C1FE2AA))(a4, 0x0, 0x1);
        }
        *(unsigned char *)((a4 + 0x0)) = 0x0;
        return ((int (*)(int, int, int))(0x8C1FE2AA))(a4, 0x0, 0x1);
    }
    t2 = *(signed char *)((a4 + 0x8));
    if ((unsigned char)t2 != 0xFF) {
        if ((unsigned char)t2 != 0) {
            return ((int (*)(int, int, int))(0x8C1FE2A8))(a4, 0x0, 0x1);
        }
        *(unsigned char *)((a4 + 0x0)) = 0x0;
        return ((int (*)(int, int, int))(0x8C1FE2AA))(a4, 0x0, 0x1);
    }
    *(unsigned char *)((a4 + 0x0)) = 0x0;
    return ((int (*)(int, int, int))(0x8C1FE2AA))(a4, 0x0, 0x1);
}

int FUN_8c013394(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = a5;
    t1 = ((a4 * 0x1F0) + 0x8C286030);
    t2 = 0x0;
    for (;;) {
        t3 = *(signed char *)((t0 + 0x0));
        t0 = (t0 + 0x1);
        t2 = (t2 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = t3;
        t1 = (t1 + 0x1);
        if ((int)t2 >= (int)0x9) {
            break;
        }
    }
    t4 = a6;
    if ((int)a6 > (int)0x14) {
        t4 = 0x14;
    }
    *(unsigned int *)((((a4 * 0x1F0) + 0x8C285E4C) + 0x1E0)) = t4;
    return 0x1E0;
}

int FUN_8c0eab50(void)
{
    *(unsigned int *)0xFFA00020 = 0x0;
    *(unsigned int *)0xFFA0002C = 0x1201;
    *(unsigned int *)0xFFA00040 = 0x8201;
    return ((int (*)(int, int, int, int))(0x8C0EAB8E))(0x8201, 0xFFA00040, 0x0, 0x10000);
}

int ADXB_EvokeExpandSte(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)(((a4 + 0x50) + 0x20));
    t1 = *(int *)((a4 + 0x50));
    t2 = *(int *)((a4 + 0x8));
    t3 = *(int *)(((a4 + 0x50) + 0x1C));
    t4 = *(int *)(((a4 + 0x50) + 0x14));
    ADXPD_EntrySte(t2, t1, (a5 << 1), (t4 + (t0 << 1)));
    return ADXPD_Start(t2);
}

int FUN_8c0131e4(void)
{
    return ((int (*)(void))(0x8C013380))();
}

int FUN_8c0c5286(int a4)
{
    int t0;
    int t4;
    int t1;

    t0 = *(int *)(((a4 << 2) + 0x8C1AED20));
    t4 = 0x8C1AED20;
    if (t0 == 0) {
        t1 = *(int *)(((a4 << 2) + 0x8C124884));
        FUN_8c08e654(t1);
        *(unsigned int *)(((a4 << 2) + 0x8C1AED20)) = 0x1;
        FUN_8c0c51e0(a4);
        *(unsigned int *)(((a4 << 2) + 0x8C1AED48)) = 0x1;
        t4 = 0x8C1AED48;
    }
    return t4;
}

int FUN_8c0c542c(int a4)
{
    int t0;
    int t1;

    t0 = *(int *)(((a4 << 2) + 0x8C1AED70));
    if (t0 == 0) {
        t1 = *(int *)(((a4 << 2) + 0x8C1248CC));
        FUN_8c08e654(t1);
        *(unsigned int *)(((a4 << 2) + 0x8C1AED70)) = 0x1;
        return FUN_8c0c533c(a4);
    }
    return 0x8C1AED70;
}

int FUN_8c0e8f08(int a4)
{
    int t0;
    int t2;

    t0 = *(int *)0x8C34A368;
    if (t0 == 0) {
        *(unsigned int *)0x8C34A368 = 0x1;
        fileLoadCloseSlot(0x4);
        t2 = *(int *)(((a4 << 2) + 0x8C1DC5CC));
        fileLoadStartSlot(0xCBE0000, t2, 0x0, 0x4);
    }
    return fileLoadPollSlot(0x4);
}

float FUN_8c0ef9b0(int a4)
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
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16[16];
    float u17[4];
    float u18[16];
    float u19[16];
    float u20[4];
    float u21[16];
    float u22[4];
    float u23[16];
    float u24[4];
    float u25[16];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x0) + 4));
    u2 = *(float *)(((a4 + 0x8) + 0x0));
    u3 = *(float *)((((a4 + 0x8) + 0x0) + 4));
    u4 = *(float *)((((a4 + 0x8) + 0x8) + 0x0));
    u5 = *(float *)(((((a4 + 0x8) + 0x8) + 0x0) + 4));
    u6 = *(float *)(((((a4 + 0x8) + 0x8) + 0x8) + 0x0));
    u7 = *(float *)((((((a4 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u8 = *(float *)((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u9 = *(float *)(((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u10 = *(float *)(((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u11 = *(float *)((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u12 = *(float *)((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u13 = *(float *)(((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u14 = *(float *)(((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u15 = *(float *)((((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u16[0] = u1;
    u16[1] = u0;
    u16[2] = u3;
    u16[3] = u2;
    u16[4] = u5;
    u16[5] = u4;
    u16[6] = u7;
    u16[7] = u6;
    u16[8] = u9;
    u16[9] = u8;
    u16[10] = u11;
    u16[11] = u10;
    u16[12] = u13;
    u16[13] = u12;
    u16[14] = u15;
    u16[15] = u14;
    _builtin_st_ext((float (*)[4])u18);
    u17[0] = u18[0];
    u17[1] = u18[1];
    u17[2] = u18[2];
    u17[3] = u18[3];
    _builtin_ld_ext((float (*)[4])u16);
    _builtin_ftrv(u17, u17);
    u19[0] = u1;
    u19[1] = u0;
    u19[2] = u3;
    u19[3] = u2;
    u19[4] = u5;
    u19[5] = u4;
    u19[6] = u7;
    u19[7] = u6;
    u19[8] = u9;
    u19[9] = u8;
    u19[10] = u11;
    u19[11] = u10;
    u19[12] = u13;
    u19[13] = u12;
    u19[14] = u15;
    u19[15] = u14;
    u20[0] = u18[4];
    u20[1] = u18[5];
    u20[2] = u18[6];
    u20[3] = u18[7];
    _builtin_ld_ext((float (*)[4])u19);
    _builtin_ftrv(u20, u20);
    u21[0] = u1;
    u21[1] = u0;
    u21[2] = u3;
    u21[3] = u2;
    u21[4] = u5;
    u21[5] = u4;
    u21[6] = u7;
    u21[7] = u6;
    u21[8] = u9;
    u21[9] = u8;
    u21[10] = u11;
    u21[11] = u10;
    u21[12] = u13;
    u21[13] = u12;
    u21[14] = u15;
    u21[15] = u14;
    u22[0] = u18[8];
    u22[1] = u18[9];
    u22[2] = u18[10];
    u22[3] = u18[11];
    _builtin_ld_ext((float (*)[4])u21);
    _builtin_ftrv(u22, u22);
    u23[0] = u1;
    u23[1] = u0;
    u23[2] = u3;
    u23[3] = u2;
    u23[4] = u5;
    u23[5] = u4;
    u23[6] = u7;
    u23[7] = u6;
    u23[8] = u9;
    u23[9] = u8;
    u23[10] = u11;
    u23[11] = u10;
    u23[12] = u13;
    u23[13] = u12;
    u23[14] = u15;
    u23[15] = u14;
    u24[0] = u18[12];
    u24[1] = u18[13];
    u24[2] = u18[14];
    u24[3] = u18[15];
    _builtin_ld_ext((float (*)[4])u23);
    _builtin_ftrv(u24, u24);
    _builtin_st_ext((float (*)[4])u25);
    u25[0] = u17[0];
    u25[1] = u17[1];
    u25[2] = u17[2];
    u25[3] = u17[3];
    u25[4] = u20[0];
    u25[5] = u20[1];
    u25[6] = u20[2];
    u25[7] = u20[3];
    u25[8] = u22[0];
    u25[9] = u22[1];
    u25[10] = u22[2];
    u25[11] = u22[3];
    u25[12] = u24[0];
    u25[13] = u24[1];
    u25[14] = u24[2];
    u25[15] = u24[3];
    _builtin_ld_ext((float (*)[4])u25);
    return u1;
}

float FUN_8c0f31b0(int a4, int a5, int a6)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;

    u0 = *(float *)((a4 + 0x8));
    u1 = *(float *)0x8C458E3C;
    u2 = *(float *)((a5 + 0x8));
    *(float *)((a6 + 0x8)) = u1;
    u3 = *(float *)((a4 + 0x0));
    u4 = *(float *)((a5 + 0x0));
    *(float *)((a6 + 0x0)) = (u3 + ((u1 - u0) / (u2 - u0)) * (u4 - u3));
    u5 = *(float *)((a5 + 0x4));
    u6 = *(float *)((a4 + 0x4));
    *(float *)((a6 + 0x4)) = (u6 + ((u1 - u0) / (u2 - u0)) * (u5 - u6));
    return ((u1 - u0) / (u2 - u0));
}

int _pd_peripheral_error(int a4, int a5, int a6)
{
    int t0;

    t0 = *(signed char *)((a6 + 0x4));
    if ((unsigned char)t0 != 0xFC) {
        if ((unsigned char)t0 != 0xFF) {
            if ((unsigned char)t0 != 8) {
                if ((unsigned char)t0 != 5) {
                    if ((unsigned char)t0 != 6) {
                        if ((unsigned char)t0 != 0) {
                            return 0xFF000000;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0xFF0000FC;
}
