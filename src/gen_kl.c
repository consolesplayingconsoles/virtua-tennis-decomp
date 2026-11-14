/* Straight-line functions with calls and guards (batch gen_kl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o100_int { char p[0x100]; int v; };
struct o104_int { char p[0x104]; int v; };
struct o108_int { char p[0x108]; int v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct oA8_int { char p[0xA8]; int v; };
struct oAC_int { char p[0xAC]; int v; };
struct oB04_short { char p[0xB04]; short v; };
struct oB58_int { char p[0xB58]; int v; };
struct oB5C_int { char p[0xB5C]; int v; };
struct oF0_int { char p[0xF0]; int v; };
struct oF0_uint { char p[0xF0]; unsigned int v; };
struct oF4_int { char p[0xF4]; int v; };
struct oF8_int { char p[0xF8]; int v; };
struct oFC_int { char p[0xFC]; int v; };
int ADXERR_CallErrFunc(Stk3);
int ADXF_Close(int);
int ADXF_Open(int, int);
int ADXSTM_GetFad(int, int);
int adxf_ChkPrmPt(int, int);
int adxf_LoadData(int, int, int);
float motionGetFrame(int);
float nlRandom(void);
int seFootSurface(float);
int send_message_in_current_mode(int);
int set_event(int, int);
int syIntAdrChk_dumpline(int, int, int);
int syIntAdrChk_finish(void);
int syIntAdrChk_getchar(void);
int syIntAdrChk_init(void);
int syIntAdrChk_printh(int);
int evSkidMarkSpawn(int a4, int a5, int a6);
int syIntChkDump(int a4, int a5);

int evSkidMarkSpawn(int a4, int a5, int a6)
{
    register int t1;
    register int t4;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register float u0;
    register float u1;
    register float u2;

    t1 = 0x8C0DA450;
    if ((*(int *)0x8C287C60) != 0) {
    } else {
        if (a5 == 0) {
            *(unsigned int *)((0x8C40C2CC + (((((struct oB5C_int *)(a4))->v)) << 2))) = ((((struct oB58_int *)(a4))->v));
            *(float *)(((((((struct oB5C_int *)(a4))->v)) << 2) + 0x8C40C2DC)) = 0.0f;
            t1 = 0x8C40C2DC;
        } else {
            t1 = 0x8C1D5690;
            if ((*(int *)((((*(int *)0x8C1891E8) << 2) + 0x8C1D5690))) == 0) {
            } else {
                t4 = *(int *)0x8C20D14C;
                t1 = t4;
                if (t4 == 1) {
                } else {
                    t4 = (((struct o10_int *)0x8C287B2C)->v);
                    t1 = t4;
                    if ((t4 & 8) != 0) {
                    } else {
                        t4 = 0x60;
                        if ((int)((((struct o0_int *)0x8C287B2C)->v)) > 0) {
                        } else {
                            t4 = 0x60;
                            if ((int)(*(int *)0x8C1D56D8) >= (int)0x1E) {
                            } else {
                                if (a6 == 0) {
                                    t8 = 0xB58;
                                    if (((((struct oB58_int *)(a4))->v)) == (*(int *)((0x8C40C2CC + (((((struct oB5C_int *)(a4))->v)) << 2))))) {
                                    } else {
                                        t9 = *(int *)((0x8C40C2CC + (((((struct oB5C_int *)(a4))->v)) << 2)));
                                        if (((int)t9 >= (int)0x31) && ((int)t9 <= (int)0x38)) {
                                            t9 = *(int *)((0x8C40C2CC + (((((struct oB5C_int *)(a4))->v)) << 2)));
                                            if (((int)t9 >= (int)0x31) && ((int)t9 <= (int)0x38)) {
                                                t9 = (*(int *)((0x8C40C2CC + (((((struct oB5C_int *)(a4))->v)) << 2))));
                                            } else {
                                                t9 = ((((struct oB58_int *)(a4))->v));
                                            }
                                            t10 = set_event(0x38, 0x8C0DA350);
                                            u0 = *(float *)0x8C23D204;
                                            *(unsigned int *)((t10 + 0x34)) = (int)(1200.0f / u0);
                                            *(unsigned int *)((t10 + 0x30)) = (int)(1200.0f / u0);
                                            *(unsigned int *)0x8C1D56D8 = ((*(int *)0x8C1D56D8) + 0x1);
                                            if (a6 == 0) {
                                                if (t9 != 49) {
                                                    if (t9 != 50) {
                                                        if (t9 != 51) {
                                                            if (t9 != 52) {
                                                                if (t9 != 53) {
                                                                    if (t9 != 54) {
                                                                        if (t9 != 55) {
                                                                            t11 = 0x8C1D56D8;
                                                                            if (t9 != 56) {
                                                                            } else {
                                                                                *(unsigned int *)((t10 + 0x24)) = 0x1;
                                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t10 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                                                t11 = 0xFFFFE000;
                                                                            }
                                                                            t9 = t11;
                                                                        } else {
                                                                            *(unsigned int *)((t10 + 0x24)) = 0x0;
                                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t10 + 0x14)) = *(struct mv3 *)((0xAB8 + a4)); }
                                                                            t9 = 0x4000;
                                                                        }
                                                                        t11 = t9;
                                                                    } else {
                                                                        *(unsigned int *)((t10 + 0x24)) = 0x1;
                                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t10 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                                        t11 = 0x2000;
                                                                    }
                                                                    t9 = t11;
                                                                } else {
                                                                    *(unsigned int *)((t10 + 0x24)) = 0x1;
                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t10 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                                    t9 = 0x0;
                                                                }
                                                                t11 = t9;
                                                            } else {
                                                                *(unsigned int *)((t10 + 0x24)) = 0x1;
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t10 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                                t11 = 0xFFFFE000;
                                                            }
                                                            t9 = t11;
                                                        } else {
                                                            *(unsigned int *)((t10 + 0x24)) = 0x1;
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t10 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                            t9 = 0x4000;
                                                        }
                                                        t11 = t9;
                                                    } else {
                                                        *(unsigned int *)((t10 + 0x24)) = 0x0;
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t10 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                        t11 = 0x2000;
                                                    }
                                                    t9 = t11;
                                                } else {
                                                    *(unsigned int *)((t10 + 0x24)) = 0x0;
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t10 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                    t9 = 0x0;
                                                }
                                                (((struct o2C_float *)(t10))->v) = 1.20000005f;
                                                (((struct o28_float *)(t10))->v) = 0.699999988f;
                                                t11 = t9;
                                            } else {
                                                u0 = nlRandom();
                                                *(unsigned int *)((t10 + 0x24)) = (int)(u0 * 1.0f);
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t10 + 0x14)) = *(struct mv3 *)((((((int)(u0 * 1.0f) << 1) + (int)(u0 * 1.0f)) << 2) + (0xAB8 + a4))); }
                                                (((struct o2C_float *)(t10))->v) = 1.0f;
                                                (((struct o28_float *)(t10))->v) = 0.5f;
                                                t11 = 0x0;
                                            }
                                            (((struct o18_float *)(t10))->v) = ((((struct o0_float *)0x8C0DA758)->v));
                                            u0 = nlRandom();
                                            u1 = (((struct o4_float *)0x8C0DA758)->v);
                                            u2 = nlRandom();
                                            t9 = 0xFFFFFFFF;
                                            if ((int)(u2 * (1.0f + 1.0f)) == 0) {
                                                t9 = 0x1;
                                            }
                                            *(unsigned int *)((t10 + 0x20)) = ((((((struct oB04_short *)(a4))->v)) + t11) + ((int)(u0 * u1) * t9));
                                            if ((*(int *)0x8C1891E8) == 0) {
                                                (((struct o2C_float *)(t10))->v) = (((((struct o2C_float *)(t10))->v)) * 1.5f);
                                            }
                                            if (1.0f > ((((struct o2C_float *)(t10))->v))) {
                                                (((struct o2C_float *)(t10))->v) = 1.0f;
                                            }
                                            if (((((struct o2C_float *)(t10))->v)) > (1.0f + 1.0f)) {
                                                (((struct o2C_float *)(t10))->v) = ((((struct o10_float *)0x8C0DA758)->v));
                                            }
                                            u0 = (((struct o14_float *)0x8C0DA758)->v);
                                            if (u0 > ((((struct o28_float *)(t10))->v))) {
                                                (((struct o28_float *)(t10))->v) = u0;
                                            }
                                            if (((((struct o28_float *)(t10))->v)) > 0.5f) {
                                                (((struct o28_float *)(t10))->v) = 0.5f;
                                            }
                                            t9 = (seFootSurface(((((struct o2C_float *)(t10))->v))));
                                        } else {
                                            t10 = 0xB58;
                                            if ((int)((((struct oB58_int *)(a4))->v)) < (int)0x31) {
                                            } else {
                                                t11 = 0xB58;
                                                if ((int)((((struct oB58_int *)(a4))->v)) > (int)0x38) {
                                                } else {
                                                    t12 = *(int *)((0x8C40C2CC + (((((struct oB5C_int *)(a4))->v)) << 2)));
                                                    if (((int)t12 >= (int)0x31) && ((int)t12 <= (int)0x38)) {
                                                        t12 = (*(int *)((0x8C40C2CC + (((((struct oB5C_int *)(a4))->v)) << 2))));
                                                    } else {
                                                        t12 = ((((struct oB58_int *)(a4))->v));
                                                    }
                                                    t13 = set_event(0x38, 0x8C0DA350);
                                                    u0 = *(float *)0x8C23D204;
                                                    *(unsigned int *)((t13 + 0x34)) = (int)(1200.0f / u0);
                                                    *(unsigned int *)((t13 + 0x30)) = (int)(1200.0f / u0);
                                                    *(unsigned int *)0x8C1D56D8 = ((*(int *)0x8C1D56D8) + 0x1);
                                                    if (a6 == 0) {
                                                        if (t12 != 49) {
                                                            if (t12 != 50) {
                                                                if (t12 != 51) {
                                                                    if (t12 != 52) {
                                                                        if (t12 != 53) {
                                                                            if (t12 != 54) {
                                                                                if (t12 != 55) {
                                                                                    t14 = 0x8C1D56D8;
                                                                                    if (t12 != 56) {
                                                                                    } else {
                                                                                        *(unsigned int *)((t13 + 0x24)) = 0x1;
                                                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t13 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                                                        t14 = 0xFFFFE000;
                                                                                    }
                                                                                    t12 = t14;
                                                                                } else {
                                                                                    *(unsigned int *)((t13 + 0x24)) = 0x0;
                                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t13 + 0x14)) = *(struct mv3 *)((0xAB8 + a4)); }
                                                                                    t12 = 0x4000;
                                                                                }
                                                                                t14 = t12;
                                                                            } else {
                                                                                *(unsigned int *)((t13 + 0x24)) = 0x1;
                                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t13 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                                                t14 = 0x2000;
                                                                            }
                                                                            t12 = t14;
                                                                        } else {
                                                                            *(unsigned int *)((t13 + 0x24)) = 0x1;
                                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t13 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                                            t12 = 0x0;
                                                                        }
                                                                        t14 = t12;
                                                                    } else {
                                                                        *(unsigned int *)((t13 + 0x24)) = 0x1;
                                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t13 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                                        t14 = 0xFFFFE000;
                                                                    }
                                                                    t12 = t14;
                                                                } else {
                                                                    *(unsigned int *)((t13 + 0x24)) = 0x1;
                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t13 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                                    t12 = 0x4000;
                                                                }
                                                                t14 = t12;
                                                            } else {
                                                                *(unsigned int *)((t13 + 0x24)) = 0x0;
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t13 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                                t14 = 0x2000;
                                                            }
                                                            t12 = t14;
                                                        } else {
                                                            *(unsigned int *)((t13 + 0x24)) = 0x0;
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t13 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                            t12 = 0x0;
                                                        }
                                                        (((struct o2C_float *)(t13))->v) = 1.20000005f;
                                                        (((struct o28_float *)(t13))->v) = 0.699999988f;
                                                        t14 = t12;
                                                    } else {
                                                        u0 = nlRandom();
                                                        *(unsigned int *)((t13 + 0x24)) = (int)(u0 * 1.0f);
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t13 + 0x14)) = *(struct mv3 *)((((((int)(u0 * 1.0f) << 1) + (int)(u0 * 1.0f)) << 2) + (0xAB8 + a4))); }
                                                        (((struct o2C_float *)(t13))->v) = 1.0f;
                                                        (((struct o28_float *)(t13))->v) = 0.5f;
                                                        t14 = 0x0;
                                                    }
                                                    (((struct o18_float *)(t13))->v) = ((((struct o0_float *)0x8C0DA758)->v));
                                                    u0 = nlRandom();
                                                    u1 = (((struct o4_float *)0x8C0DA758)->v);
                                                    u2 = nlRandom();
                                                    t12 = 0xFFFFFFFF;
                                                    if ((int)(u2 * (1.0f + 1.0f)) == 0) {
                                                        t12 = 0x1;
                                                    }
                                                    *(unsigned int *)((t13 + 0x20)) = ((((((struct oB04_short *)(a4))->v)) + t14) + ((int)(u0 * u1) * t12));
                                                    if ((*(int *)0x8C1891E8) == 0) {
                                                        (((struct o2C_float *)(t13))->v) = (((((struct o2C_float *)(t13))->v)) * 1.5f);
                                                    }
                                                    if (1.0f > ((((struct o2C_float *)(t13))->v))) {
                                                        (((struct o2C_float *)(t13))->v) = 1.0f;
                                                    }
                                                    if (((((struct o2C_float *)(t13))->v)) > (1.0f + 1.0f)) {
                                                        (((struct o2C_float *)(t13))->v) = ((((struct o10_float *)0x8C0DA758)->v));
                                                    }
                                                    u0 = (((struct o14_float *)0x8C0DA758)->v);
                                                    if (u0 > ((((struct o28_float *)(t13))->v))) {
                                                        (((struct o28_float *)(t13))->v) = u0;
                                                    }
                                                    if (((((struct o28_float *)(t13))->v)) > 0.5f) {
                                                        (((struct o28_float *)(t13))->v) = 0.5f;
                                                    }
                                                    t11 = (seFootSurface(((((struct o2C_float *)(t13))->v))));
                                                }
                                                t10 = t11;
                                            }
                                            t9 = t10;
                                        }
                                        t8 = t9;
                                    }
                                    t9 = t8;
                                } else {
                                    t8 = set_event(0x38, 0x8C0DA350);
                                    u0 = *(float *)0x8C23D204;
                                    *(unsigned int *)((t8 + 0x34)) = (int)(1200.0f / u0);
                                    *(unsigned int *)((t8 + 0x30)) = (int)(1200.0f / u0);
                                    *(unsigned int *)0x8C1D56D8 = ((*(int *)0x8C1D56D8) + 0x1);
                                    if (a6 == 0) {
                                        if (t4 != 49) {
                                            if (t4 != 50) {
                                                if (t4 != 51) {
                                                    if (t4 != 52) {
                                                        if (t4 != 53) {
                                                            if (t4 != 54) {
                                                                if (t4 != 55) {
                                                                    t10 = 0x8C1D56D8;
                                                                    if (t4 != 56) {
                                                                    } else {
                                                                        *(unsigned int *)((t8 + 0x24)) = 0x1;
                                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t8 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                                        t10 = 0xFFFFE000;
                                                                    }
                                                                    t4 = t10;
                                                                } else {
                                                                    *(unsigned int *)((t8 + 0x24)) = 0x0;
                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t8 + 0x14)) = *(struct mv3 *)((0xAB8 + a4)); }
                                                                    t4 = 0x4000;
                                                                }
                                                                t10 = t4;
                                                            } else {
                                                                *(unsigned int *)((t8 + 0x24)) = 0x1;
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t8 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                                t10 = 0x2000;
                                                            }
                                                            t4 = t10;
                                                        } else {
                                                            *(unsigned int *)((t8 + 0x24)) = 0x1;
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t8 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                            t4 = 0x0;
                                                        }
                                                        t10 = t4;
                                                    } else {
                                                        *(unsigned int *)((t8 + 0x24)) = 0x1;
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t8 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                        t10 = 0xFFFFE000;
                                                    }
                                                    t4 = t10;
                                                } else {
                                                    *(unsigned int *)((t8 + 0x24)) = 0x1;
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t8 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                    t4 = 0x4000;
                                                }
                                                t10 = t4;
                                            } else {
                                                *(unsigned int *)((t8 + 0x24)) = 0x0;
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t8 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                                t10 = 0x2000;
                                            }
                                            t4 = t10;
                                        } else {
                                            *(unsigned int *)((t8 + 0x24)) = 0x0;
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t8 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                                            t4 = 0x0;
                                        }
                                        (((struct o2C_float *)(t8))->v) = 1.20000005f;
                                        (((struct o28_float *)(t8))->v) = 0.699999988f;
                                        t10 = t4;
                                    } else {
                                        u0 = nlRandom();
                                        *(unsigned int *)((t8 + 0x24)) = (int)(u0 * 1.0f);
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t8 + 0x14)) = *(struct mv3 *)((((((int)(u0 * 1.0f) << 1) + (int)(u0 * 1.0f)) << 2) + (0xAB8 + a4))); }
                                        (((struct o2C_float *)(t8))->v) = 1.0f;
                                        (((struct o28_float *)(t8))->v) = 0.5f;
                                        t10 = 0x0;
                                    }
                                    (((struct o18_float *)(t8))->v) = ((((struct o0_float *)0x8C0DA758)->v));
                                    u0 = nlRandom();
                                    u1 = (((struct o4_float *)0x8C0DA758)->v);
                                    u2 = nlRandom();
                                    t4 = 0xFFFFFFFF;
                                    if ((int)(u2 * (1.0f + 1.0f)) == 0) {
                                        t4 = 0x1;
                                    }
                                    *(unsigned int *)((t8 + 0x20)) = ((((((struct oB04_short *)(a4))->v)) + t10) + ((int)(u0 * u1) * t4));
                                    if ((*(int *)0x8C1891E8) == 0) {
                                        (((struct o2C_float *)(t8))->v) = (((((struct o2C_float *)(t8))->v)) * 1.5f);
                                    }
                                    if (1.0f > ((((struct o2C_float *)(t8))->v))) {
                                        (((struct o2C_float *)(t8))->v) = 1.0f;
                                    }
                                    if (((((struct o2C_float *)(t8))->v)) > (1.0f + 1.0f)) {
                                        (((struct o2C_float *)(t8))->v) = ((((struct o10_float *)0x8C0DA758)->v));
                                    }
                                    u0 = (((struct o14_float *)0x8C0DA758)->v);
                                    if (u0 > ((((struct o28_float *)(t8))->v))) {
                                        (((struct o28_float *)(t8))->v) = u0;
                                    }
                                    if (((((struct o28_float *)(t8))->v)) > 0.5f) {
                                        (((struct o28_float *)(t8))->v) = 0.5f;
                                    }
                                    t9 = (seFootSurface(((((struct o2C_float *)(t8))->v))));
                                }
                                if (a6 == 0) {
                                    *(unsigned int *)((0x8C40C2CC + (((((struct oB5C_int *)(a4))->v)) << 2))) = ((((struct oB58_int *)(a4))->v));
                                    *(float *)(((0x8C40C2DC + (((((struct oB5C_int *)(a4))->v)) << 2)) + 0x0)) = (motionGetFrame(a4));
                                } else {
                                    t4 = t9;
                                }
                            }
                        }
                        t1 = t4;
                    }
                }
            }
        }
    }
    return t1;
}

int syIntChkDump(int a4, int a5)
{
    int stk[3];
    register int t0;
    register int t16;
    register int t56;
    register int t57;
    register int t73;
    register int t76;

    *(unsigned short *)(((int)stk + 0)) = a4;
    t0 = *(short *)(((int)stk + 0));
    if (((unsigned short)t0 != 0x300) && (((unsigned short)t0 != 0x340) && (((unsigned short)t0 != 0x380) && ((unsigned short)t0 != 0x3C0)))) {
        return (unsigned short)t0;
    }
    *(unsigned int *)0x8C4747CC = a5;
    *(unsigned int *)(((int)stk + 8)) = (syIntAdrChk_init());
    send_message_in_current_mode(0x8C20B614);
    syIntAdrChk_dumpline(0x8C20B638, 0xA, 0x8);
    syIntAdrChk_dumpline(0x8C20B644, 0x12, 0x8);
    syIntAdrChk_dumpline(0x8C20B650, 0x1A, 0x8);
    syIntAdrChk_dumpline(0x8C20B65C, 0x22, 0x8);
    send_message_in_current_mode(0x8C20B668);
    syIntAdrChk_printh(((((struct oA8_int *)((*(int *)0x8C4747CC)))->v)));
    send_message_in_current_mode(0x8C20B670);
    syIntAdrChk_printh(((((struct oAC_int *)((*(int *)0x8C4747CC)))->v)));
    syIntAdrChk_dumpline(0x8C20B67C, 0x2D, 0x8);
    t16 = *(int *)0x8C4747CC;
    *(unsigned int *)(((int)stk + 4)) = ((((struct oF0_int *)(t16))->v));
    (((struct oF0_uint *)(t16))->v) = (*(int *)(((*(int *)0x8C4747CC) + 0x4)));
    syIntAdrChk_dumpline(0x8C20B68C, 0x35, 0x8);
    (((struct oF0_uint *)((*(int *)0x8C4747CC)))->v) = (*(int *)(((int)stk + 4)));
    ((int (*)(int, int))syIntAdrChk_dumpline)(0x8C20B698, 0x2);        /* the original sets no r6 for this one */
    send_message_in_current_mode(0x8C20B6A8);
    syIntAdrChk_printh(((((struct oF0_int *)((*(int *)0x8C4747CC)))->v)));
    send_message_in_current_mode(0x8C20B6B0);
    syIntAdrChk_printh(((((struct oF4_int *)((*(int *)0x8C4747CC)))->v)));
    send_message_in_current_mode(0x8C20B6B8);
    syIntAdrChk_printh(((((struct oF8_int *)((*(int *)0x8C4747CC)))->v)));
    send_message_in_current_mode(0x8C20B6C0);
    syIntAdrChk_printh(((((struct oFC_int *)((*(int *)0x8C4747CC)))->v)));
    send_message_in_current_mode(0x8C20B6C8);
    syIntAdrChk_printh((*(int *)(((*(int *)0x8C4747CC) + 0x0))));
    send_message_in_current_mode(0x8C20B6D0);
    syIntAdrChk_printh(((((struct o100_int *)((*(int *)0x8C4747CC)))->v)));
    send_message_in_current_mode(0x8C20B6D8);
    syIntAdrChk_printh(((((struct o104_int *)((*(int *)0x8C4747CC)))->v)));
    send_message_in_current_mode(0x8C20B6E0);
    syIntAdrChk_printh(((((struct o108_int *)((*(int *)0x8C4747CC)))->v)));
    t56 = 0x0;
    for (;;) {
        t57 = ((~(((~t56) + 0x1) & 0x3)) + 0x1);
        if ((int)t56 >= 0) {
            t57 = (t56 & 0x3);
        }
        if (t57 == 0) {
            send_message_in_current_mode(0x8C20B6E8);
        }
        syIntAdrChk_printh((*(int *)((((t56 << 2) + 0x8C20B500) + 0x0))));
        send_message_in_current_mode(0x8C20B6EC);
        syIntAdrChk_printh((*(int *)(((*(int *)((((t56 << 2) + 0x8C20B500) + 0x0))) + 0x0))));
        send_message_in_current_mode(0x8C20B6F0);
        t56 = (t56 + 0x1);
        if ((int)t56 >= (int)0x45) {
            break;
        }
    }
    send_message_in_current_mode(0x8C20B6E8);
    t73 = 0x8C20B6F4;
    if ((*(int *)(((int)stk + 8))) != 0) {
        
        t73 = 0x8C20B740;
    }
    send_message_in_current_mode(t73);
    for (;;) {
        t76 = syIntAdrChk_getchar();
        if ((signed char)t76 == 13) {
            break;
        }
    }
    *(unsigned int *)0xFF000024 = (unsigned short)(*(short *)(((int)stk + 0)));
    return syIntAdrChk_finish();
}
