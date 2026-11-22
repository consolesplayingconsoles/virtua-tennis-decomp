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
