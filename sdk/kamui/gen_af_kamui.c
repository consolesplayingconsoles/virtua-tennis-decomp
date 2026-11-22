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


int kmiFLWCTRLLaunchPacket(int a4, int a5, int a6, int a7)
{
    int t0;
    int t11;
    int t31;
    int t32;
    int t33;
    int t34;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t48;
    int t50;
    int t53;
    int t35;
    int t72;
    int t73;
    int t74;
    int t75;
    int stk[13];
    int R1012;
    int R1016;

    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);

    t0 = *(int *)0x8C4607B0;
    if (((*(int *)0x8C45F918) != 0) && (a5 != 0)) {
        *(unsigned int *)((t0 + 0x38)) = 0x1;
    } else {
        *(unsigned int *)((t0 + 0x38)) = 0x0;
    }
    *(unsigned int *)((t0 + 0x30)) = a6;
    *(unsigned int *)((t0 + 0x8)) = a4;
    *(unsigned int *)((t0 + 0x1A4)) = (*(int *)0x8C45F7CC);
    *(unsigned int *)((t0 + 0x1AC)) = (*(int *)0x8C45F7D4);
    *(unsigned int *)((t0 + 0x1A8)) = (*(int *)0x8C45F7D0);
    *(unsigned int *)((t0 + 0x1B0)) = (*(int *)0x8C45F7D8);
    *(unsigned int *)((t0 + 0x1B4)) = (*(int *)0x8C45F7DC);
    *(unsigned int *)((t0 + 0x1BC)) = (*(int *)0x8C45F7E4);
    *(unsigned int *)((t0 + 0x1B8)) = (*(int *)0x8C45F7E0);
    *(unsigned int *)((t0 + 0x1C0)) = (*(int *)0x8C45F7E8);
    t11 = a5;
    if (a4 == 0) {
        *(unsigned int *)((t0 + 0x40)) = a7;
        t11 = 0x0;
    }
    *(unsigned int *)((t0 + 0x28)) = (*(int *)0x8C4607D4);
    if (t11 != 0) {
        *(unsigned int *)((t0 + 0x18)) = 0x8;
        *(unsigned int *)0x8C4607D4 = ((*(int *)0x8C4607D4) + 0x1);
        if ((unsigned int)(*(int *)0x8C4607D4) >= (unsigned int)(*(int *)0x8C45F93C)) {
            *(unsigned int *)0x8C4607D4 = 0x0;
        }
        if ((*(int *)0x8C4607E8) != 0) {
            *(unsigned int *)0x8C4607D4 = ((*(int *)0x8C4607D4) & 0x1);
        }
    } else {
        *(unsigned int *)((t0 + 0x18)) = 0x6;
    }
    *(unsigned int *)((t0 + 0x2C)) = (*(int *)0x8C45F7B8);
    if ((*(int *)0x8C460784) == 0) {
        *(unsigned int *)((t0 + 0x14)) = 0x2;
    } else {
        t31 = *(int *)0x8C45F00C;
        t32 = *(int *)(((0x8C45F6D4 + ((t31 - 1) << 2)) + 0x0));
        t33 = t32;
        t34 = 0x5;
        for (;;) {
            if (((((int)t33 >= 0) ? (0x1 << (t33 & 31)) : ((-(int)t33 & 31) ? ((int)0x1 >> (-(int)t33 & 31)) : ((int)0x1 >> 31))) & (*(int *)((((0x184 + t0) + ((t31 - 1) << 2)) + 0x0)))) != 0) {
                t35 = t33;
            }
            t34 = (t34 - 0x1);
            t33 = ((int)((unsigned int)(t33 + 0x1) % (unsigned int)0x5));
            if (t34 == 0) {
                break;
            }
        }
        t40 = t32;
        t41 = ((t31 - 1) << 2);
        t42 = t33;
        t43 = t34;
        t44 = 0x5;
        t45 = t32;
        for (;;) {
            if (((((int)t45 >= 0) ? (0x1 << (t45 & 31)) : ((-(int)t45 & 31) ? ((int)0x1 >> (-(int)t45 & 31)) : ((int)0x1 >> 31))) & (*(int *)((((((*(int *)0x8C4607D0) - 1) << 2) + (0x184 + t0)) + 0x0)))) != 0) {
                for (;;) {
                    t40 = 0x0;
                    t48 = kmyGetDMAHANDLE(t40);
                    R1012 = t48;
                    if (t48 != 0) {
                        break;
                    }
                    t40 = 0x7;
                    kmyRequestCallback(t40);
                }
                t50 = *(int *)0x8C4607D0;
                t43 = t45;
                t43 = (t43 << 2);
                R1016 = t43;
                t43 = (*(int *)((t43 + (((((t50 - 1) << 2) + (t50 - 1)) << 2) + (0xE4 + t0)))));
                t42 = (*(int *)0x8C4607D0);
                t42 = (t42 - 1);
                t53 = t42;
                t42 = (t42 << 2);
                t42 = (t42 + t53);
                t41 = (*(int *)((t0 + 0x3C)));
                t42 = (t42 << 2);
                t42 = (t42 + (t0 + 0x44));
                t42 = (*(int *)((t42 + (R1016))));
                t40 = (R1012);
                kmySetTADMA(t40, t41, t42, t43, 0x0, (((int)t45 >= 0) ? (0x1 << (t45 & 31)) : ((-(int)t45 & 31) ? ((int)0x1 >> (-(int)t45 & 31)) : ((int)0x1 >> 31))));
                if (t45 == t35) {
                    t41 = 0x8C1F9F0E;
                    t40 = (R1012);
                    kmySetDMACallback(t40, 0x8C1F9F0E);
                    t41 = (*(int *)0x8C4607D0);
                    t40 = (R1012);
                    kmySetDMAValue(t40, t41);
                }
                t40 = (R1012);
                *(unsigned int *)0x8C4607D8 = (kmyRequestDMA(t40));
            } else {
                t72 = t40;
                t73 = t41;
                t74 = t42;
                t75 = t43;
            }
            t40 = t72;
            t41 = t73;
            t42 = t74;
            t43 = t75;
            t44 = (t44 - 0x1);
            t45 = ((int)((unsigned int)(t45 + 0x1) % (unsigned int)0x5));
            if (t44 == 0) {
                break;
            }
        }
    }
    kmiFLWCTRLRotateReadyQueue(0x0);
    return (*(int *)((t0 + 0x4)));
}


int kmyGetDisplayParametersInfo(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t4;
    int t34;
    int t70;
    int t71;
    int t33;
    int t62;
    int t74;
    int stk[13];

    t0 = *(int *)0x8C20B484;
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(int *)0x8C20B480);
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x4)) = t0;
    t2 = *(int *)0x8C20B48C;
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x8)) = (*(int *)0x8C20B488);
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0xC)) = t2;
    t4 = *(int *)0x8C20B494;
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x10)) = (*(int *)0x8C20B490);
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x14)) = t4;
    if ((unsigned int)a4 >= (unsigned int)0xC) {
    } else {
        switch ((a4 << 1)) {
            case 0:
            {
                *(unsigned int *)((a6 + 0x0)) = (*(int *)0x8C45EE9C);
            }
                break;
            case 2:
            {
                *(unsigned int *)((a6 + 0x0)) = (*(int *)0x8C45EEA0);
            }
                break;
            case 4:
            {
                *(unsigned int *)((a6 + 0x0)) = (*(int *)0x8C45EE30);
            }
                break;
            case 6:
            {
                *(unsigned int *)((a6 + 0x0)) = (*(int *)(((((int)stk + 4) + 0x8) + ((*(int *)0x8C45EE30) << 2))));
            }
                break;
            case 8:
            {
                kmyGetDisplayRegionSize((*(int *)0x8C45EE2C), a6, 0x0, a5);
            }
                break;
            case 10:
            {
                kmyGetDisplayRegionSize((*(int *)0x8C45EE2C), 0x0, a6, a5);
            }
                break;
            case 12:
            {
                kmyGetDisplayRegionSize((*(int *)0x8C45EE2C), ((int)stk + 4), (((int)stk + 4) + 0x4), a5);
                *(unsigned int *)((a6 + 0x0)) = ((*(int *)(((int)stk + 4))) * (*(int *)(((int)stk + 8))));
            }
                break;
            case 14:
            {
                if (a5 != 0) {
                    *(unsigned int *)((a6 + 0x0)) = (*(int *)((a5 + 0xC)));
                } else {
                    *(unsigned int *)((a6 + 0x0)) = (*(int *)0x8C45EE9C);
                }
            }
                break;
            case 16:
            {
                if (a5 != 0) {
                    *(unsigned int *)((a6 + 0x0)) = (*(int *)((a5 + 0x10)));
                } else {
                    if ((*(int *)0x8C45EEE4) == 0) {
                        if ((((*(int *)0x8C45EE2C) & 0x1) != 1) && ((t33 = *(int *)0x8C45EE2C, (t33 & 0x2C) == 32) && (0x1 != 0))) {
                            t34 = *(int *)0x8C45EEA0;
                            *(unsigned int *)((a6 + 0x0)) = (((int)((unsigned int)((int)((unsigned int)t34 + (unsigned int)0x0)) + ((((int)0x0 > (int)t34)) ? 1u : 0u))) >> 1);
                        } else {
                            *(unsigned int *)((a6 + 0x0)) = (*(int *)0x8C45EEA0);
                        }
                    } else {
                        *(unsigned int *)((a6 + 0x0)) = (*(int *)0x8C45EEE8);
                    }
                }
            }
                break;
            case 18:
            {
                if (a5 != 0) {
                    *(unsigned int *)((a6 + 0x0)) = (*(int *)((a5 + 0x8)));
                } else {
                    *(unsigned int *)((a6 + 0x0)) = (*(int *)0x8C45EE30);
                }
            }
                break;
            case 20:
            {
                if (a5 != 0) {
                    t62 = (*(int *)((a5 + 0x4)));
                } else {
                    t62 = (*(int *)(((((int)stk + 4) + 0x8) + ((*(int *)0x8C45EE30) << 2))));
                }
                *(unsigned int *)((a6 + 0x0)) = t62;
            }
                break;
            default:
            {
                if (a5 != 0) {
                    t74 = (((*(int *)((a5 + 0x2C))) << 2) << 1);
                } else {
                    t70 = *(int *)(((((int)stk + 4) + 0x8) + ((*(int *)0x8C45EE30) << 2)));
                    t71 = t70;
                    if ((int)t70 < 0) {
                        t71 = (t70 + 0x7);
                    }
                    t74 = ((*(int *)0x8C45EE9C) * (((t71 >> 1) >> 1) >> 1));
                }
                *(unsigned int *)((a6 + 0x0)) = t74;
            }
                break;
        }
    }
    return 0x0;
}

int kmyGetDMAHANDLE(int a4)
{
    int t21;
    int t16;
    int t13;
    int t30;
    int t27;
    int t44;
    int t41;
    int t53;
    int t58;
    int t49;
    int t35;
    int t61;

    if ((*(int *)0x8C203428) == 0) {
        *(unsigned int *)0x8C20342C = (_builtin_get_imask());
        _builtin_set_imask(0xF);
    }
    *(unsigned int *)0x8C203428 = ((*(int *)0x8C203428) + 0x1);
    if (a4 != 0) {
        if (a4 != 1) {
            t21 = 0x0;
            if (a4 != 2) {
            } else {
                t16 = 0x0;
                if ((int)(*(short *)0x8C20345C) < (int)0x20) {
                    *(unsigned short *)0x8C20345C = ((*(short *)0x8C20345C) + 0x1);
                    t13 = *(short *)0x8C203458;
                    *(unsigned short *)0x8C203458 = (t13 + 0x1);
                    *(unsigned short *)0x8C203458 = ((*(short *)0x8C203458) & 0x1F);
                    t16 = (((((short)((t13 + 0x1) - 1) << 2) << 2) << 2) + 0x8C204460);
                }
                t21 = t16;
            }
            t35 = t21;
        } else {
            t30 = 0x0;
            if ((int)(*(short *)0x8C203456) < (int)0x20) {
                *(unsigned short *)0x8C203456 = ((*(short *)0x8C203456) + 0x1);
                t27 = *(short *)0x8C203452;
                *(unsigned short *)0x8C203452 = (t27 + 0x1);
                *(unsigned short *)0x8C203452 = ((*(short *)0x8C203452) & 0x1F);
                t30 = (((((short)((t27 + 0x1) - 1) << 2) << 2) << 2) + 0x8C203C60);
            }
            t35 = t30;
        }
        t49 = t35;
    } else {
        t44 = 0x0;
        if ((int)(*(short *)0x8C203450) < (int)0x20) {
            *(unsigned short *)0x8C203450 = ((*(short *)0x8C203450) + 0x1);
            t41 = *(short *)0x8C20344C;
            *(unsigned short *)0x8C20344C = (t41 + 0x1);
            *(unsigned short *)0x8C20344C = ((*(short *)0x8C20344C) & 0x1F);
            t44 = (((((short)((t41 + 0x1) - 1) << 2) << 2) << 2) + 0x8C203460);
        }
        t49 = t44;
    }
    if (t49 == 0) {
        t53 = *(int *)0x8C203428;
        *(unsigned int *)0x8C203428 = (t53 - 1);
        if ((t53 - 1) == 0) {
            _builtin_set_imask(((unsigned int)((((*(int *)0x8C20342C) & 0xF) << 2) << 2) >> 4));
        }
        t61 = 0x0;
    } else {
        kmyZeroMemory(t49, 0x40);
        *(unsigned int *)((t49 + 0x28)) = 0x1;
        *(unsigned int *)((t49 + 0x20)) = a4;
        t58 = *(int *)0x8C203424;
        *(unsigned int *)0x8C203424 = (t58 + 0x1);
        *(unsigned int *)((t49 + 0x0)) = ((t58 + 0x1) - 1);
        if ((unsigned int)(*(int *)0x8C203424) >= (unsigned int)0x80000000) {
            *(unsigned int *)0x8C203424 = 0x1;
        }
        t61 = t49;
    }
    return t61;
}

int kmySetVirticalFilterMode(int a4, int a5)
{
    int t0;
    int t2;
    int t5;
    int t3;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 == 0) {
        return 0xEEEE;
    }
    t2 = *(int *)((a4 + 0x88));
    t5 = 0x400;
    if ((unsigned int)a5 < (unsigned int)0x23) {
        switch ((a5 << 1)) {
            case 0:
            {
                t3 = 0x400;
            }
                break;
            case 2:
            {
                t3 = 0x401;
            }
                break;
            case 4:
            case 8:
            {
                t3 = 0x800;
            }
                break;
            case 6:
            {
                t3 = 0x472;
            }
                break;
            case 10:
            case 12:
            case 14:
            case 16:
            case 18:
            case 22:
            case 24:
            case 26:
            case 28:
            case 30:
            case 32:
            case 34:
            case 36:
            case 38:
            case 50:
            case 52:
            case 54:
            case 56:
            case 58:
            {
                t3 = 0x400;
            }
                break;
            case 20:
            {
                t3 = 0x8E3;
            }
                break;
            case 40:
            {
                t3 = 0x3DE;
            }
                break;
            case 42:
            {
                t3 = 0x3BF;
            }
                break;
            case 44:
            {
                t3 = 0x3A2;
            }
                break;
            case 46:
            {
                t3 = 0x387;
            }
                break;
            case 48:
            {
                t3 = 0x36D;
            }
                break;
            case 60:
            {
                t3 = 0x7BD;
            }
                break;
            case 62:
            {
                t3 = 0x780;
            }
                break;
            case 64:
            {
                t3 = 0x745;
            }
                break;
            case 66:
            {
                t3 = 0x70F;
            }
                break;
            default:
            {
                t3 = 0x6DB;
            }
                break;
        }
        t5 = t3;
    }
    *(unsigned int *)((t2 + 0x24)) = (((*(int *)((t2 + 0x24))) & 0xFFFF0000) | t5);
    return 0x0;
}


