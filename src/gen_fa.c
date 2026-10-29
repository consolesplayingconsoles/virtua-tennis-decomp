/* Straight-line functions with calls and guards (batch gen_fa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int cpuDblPositionCalc(int, int);
int kdDevGetStorageInfo(int, int);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdGetStatus(int, int);
int kdIsChanged(int);
int kdRecognizeChanged(int);
int kdSetGetMediaInfo(int, int, int);
int menuTextMsgPut(int, int, int, int, Stk3, float);
int vmsfb_sleep(void);
int menuItemTextPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int cpuDblPosition(int a4);
int vmsio_get_media_info(int a4, int a5);


int cpuDblPosition(int a4)
{
    int t0;
    float u9;
    float u15;
    float u31;
    float u32;
    float u48;
    float u49;
    float u60;
    float u69;
    int stk[8];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    int T_;
    R4 = a4;
    L_8C06AB78:;
    t0 = *(int *)((R4 + 0xB5C));
    R0 = (0x142);
    R12 = (R4);
    R13 = (((t0 * 0x160) + 0x8C2FC69C));
    R14 = ((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84));
    R4 = (t0);
    if (((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x142))) == 0)) goto L_8C06ABB4;
    goto L_8C06ABAC;
    L_8C06ABAC:;
    *(unsigned char *)((R13 + R0)) = ((*(signed char *)((R13 + R0))) - 1);
    goto L_8C06AD58;
    L_8C06AD58:;
    return R0;
    L_8C06ABB4:;
    u9 = *(float *)((R12 + 0xAE8));
    R0 = (0xAE8);
    F3 = (0.0f);
    F4 = (u9);
    if ((!(u9 > 0.0f))) goto L_8C06ABC2;
    goto L_8C06ABBE;
    L_8C06ABBE:;
    R2 = (0x1);
    goto L_8C06ABEE;
    L_8C06ABEE:;
    u15 = *(float *)((R14 + R0));
    F3 = (0.0f);
    F5 = (u15);
    if ((!(u15 > 0.0f))) goto L_8C06ABFA;
    goto L_8C06ABF6;
    L_8C06ABF6:;
    R3 = (0x1);
    goto L_8C06AC04;
    L_8C06AC04:;
    if ((R2 != R3)) goto L_8C06AC26;
    goto L_8C06AC08;
    L_8C06AC08:;
    if ((0.0f > (F5 - F4))) goto L_8C06AC18;
    goto L_8C06AC12;
    L_8C06AC12:;
    F3 = ((F5 - F4));
    goto L_8C06AC1E;
    L_8C06AC1E:;
    if ((20.0f > F3)) goto L_8C06AC52;
    goto L_8C06AC26;
    L_8C06AC26:;
    if ((0.0f > F4)) goto L_8C06AC30;
    goto L_8C06AC2C;
    L_8C06AC2C:;
    F3 = (F4);
    goto L_8C06AC34;
    L_8C06AC34:;
    if ((!(16.4549999f > F3))) goto L_8C06ACBC;
    goto L_8C06AC3C;
    L_8C06AC3C:;
    if ((0.0f > F5)) goto L_8C06AC46;
    goto L_8C06AC42;
    L_8C06AC42:;
    F3 = (F5);
    goto L_8C06AC4A;
    L_8C06AC4A:;
    if ((!(16.4549999f > F3))) goto L_8C06ACBC;
    goto L_8C06AC52;
    L_8C06AC52:;
    cpuDblPositionCalc(R14, ((int)stk + 4));
    u31 = *(float *)(((int)stk + 4));
    u32 = *(float *)((R14 + 0xAE8));
    F4 = ((u32 - u31));
    F5 = (u32);
    F6 = (u31);
    if ((0.0f > (u32 - u31))) goto L_8C06AC6C;
    goto L_8C06AC68;
    L_8C06AC68:;
    F3 = (F4);
    goto L_8C06AC74;
    L_8C06AC74:;
    if ((!(F3 > 5.0f))) goto L_8C06ACBC;
    goto L_8C06AC7C;
    L_8C06AC7C:;
    R2 = ((*(signed char *)((R13 + 0x13D))));
    F3 = (0.0f);
    if ((!(F4 > 0.0f))) goto L_8C06AC8A;
    goto L_8C06AC86;
    L_8C06AC86:;
    R3 = (0x1);
    goto L_8C06ACA6;
    L_8C06ACA6:;
    if ((R2 == R3)) goto L_8C06ACBC;
    goto L_8C06ACAA;
    L_8C06ACAA:;
    *(unsigned char *)((R13 + 0x13D)) = ((short)(*(signed char *)((R13 + 0x13D))) * (short)0xFFFFFFFF);
    *(unsigned char *)((R13 + 0x142)) = 0xA;
    goto L_8C06ACBC;
    L_8C06ACBC:;
    if (((*(signed char *)((R13 + 0x142))) != 0)) goto L_8C06AD44;
    goto L_8C06ACC4;
    L_8C06ACC4:;
    u48 = *(float *)((R12 + 0xAF0));
    u49 = *(float *)((R14 + 0xAF0));
    F4 = (u48);
    F5 = (u49);
    F6 = ((u48 - u49));
    if ((0.0f > (u48 - u49))) goto L_8C06ACD8;
    goto L_8C06ACD4;
    L_8C06ACD4:;
    F3 = (F6);
    goto L_8C06ACE0;
    L_8C06ACE0:;
    if ((20.0f > F3)) goto L_8C06AD44;
    goto L_8C06ACE8;
    L_8C06ACE8:;
    if ((((*(int *)((R14 + 0xB60))) & 0x100) == 0)) goto L_8C06AD44;
    goto L_8C06ACF2;
    L_8C06ACF2:;
    if (((*(int *)((R14 + 0xC5C))) != 12)) goto L_8C06AD44;
    goto L_8C06ACFA;
    L_8C06ACFA:;
    u60 = *(float *)((R14 + 0xAE8));
    R0 = (0xAE8);
    F1 = (0.0f);
    F3 = (u60);
    if ((0.0f > u60)) goto L_8C06AD08;
    goto L_8C06AD04;
    L_8C06AD04:;
    F3 = ((*(float *)((R14 + R0))));
    goto L_8C06AD0A;
    L_8C06AD0A:;
    if ((!(F3 > 16.4549999f))) goto L_8C06AD44;
    goto L_8C06AD12;
    L_8C06AD12:;
    u69 = *(float *)((R14 + 0xAE8));
    R2 = ((*(signed char *)((R13 + 0x13D))));
    F1 = (u69);
    F3 = (0.0f);
    if ((!(u69 > 0.0f))) goto L_8C06AD24;
    goto L_8C06AD20;
    L_8C06AD20:;
    R3 = (0x1);
    goto L_8C06AD2E;
    L_8C06AD2E:;
    if ((R2 != R3)) goto L_8C06AD44;
    goto L_8C06AD32;
    L_8C06AD32:;
    *(unsigned char *)((R13 + 0x13D)) = ((short)(*(signed char *)((R13 + 0x13D))) * (short)0xFFFFFFFF);
    *(unsigned char *)((R13 + 0x142)) = 0xA;
    goto L_8C06AD44;
    L_8C06AD44:;
    R0 = (0x142);
    if (((*(signed char *)((R13 + 0x142))) == 0)) goto L_8C06AD58;
    goto L_8C06AD4C;
    L_8C06AD4C:;
    R0 = (0xA24);
    if (((*(int *)((R12 + 0xA24))) != 0)) goto L_8C06AD58;
    goto L_8C06AD54;
    L_8C06AD54:;
    *(unsigned int *)((R12 + R0)) = 0x4;
    goto L_8C06AD58;
    L_8C06AD24:;
    if ((!(F3 > F1))) goto L_8C06AD2C;
    goto L_8C06AD28;
    L_8C06AD28:;
    R3 = (0xFFFFFFFF);
    goto L_8C06AD2E;
    L_8C06AD2C:;
    R3 = (0x0);
    goto L_8C06AD2E;
    L_8C06AD08:;
    F3 = ((-F3));
    goto L_8C06AD0A;
    L_8C06ACD8:;
    F3 = (((-F4) + F5));
    goto L_8C06ACE0;
    L_8C06AC8A:;
    if ((!(F3 > F4))) goto L_8C06ACA4;
    goto L_8C06AC8E;
    L_8C06AC8E:;
    R3 = (0xFFFFFFFF);
    goto L_8C06ACA6;
    L_8C06ACA4:;
    R3 = (0x0);
    goto L_8C06ACA6;
    L_8C06AC6C:;
    F3 = (((-F5) + F6));
    goto L_8C06AC74;
    L_8C06AC46:;
    F3 = ((-F5));
    goto L_8C06AC4A;
    L_8C06AC30:;
    F3 = ((-F4));
    goto L_8C06AC34;
    L_8C06AC18:;
    F3 = (((-F5) + F4));
    goto L_8C06AC1E;
    L_8C06ABFA:;
    if ((!(F3 > F5))) goto L_8C06AC02;
    goto L_8C06ABFE;
    L_8C06ABFE:;
    R3 = (0xFFFFFFFF);
    goto L_8C06AC04;
    L_8C06AC02:;
    R3 = (0x0);
    goto L_8C06AC04;
    L_8C06ABC2:;
    if ((!(F3 > F4))) goto L_8C06ABEC;
    goto L_8C06ABC6;
    L_8C06ABC6:;
    R2 = (0xFFFFFFFF);
    goto L_8C06ABEE;
    L_8C06ABEC:;
    R2 = (0x0);
    goto L_8C06ABEE;
}

int vmsio_get_media_info(int a4, int a5)
{
    int t0;
    int t2;
    int t11;
    int t13;
    int t15;
    int t16;
    int t19;
    int t20;
    int t53;
    int t54;
    int t67;
    int t63;
    int stk[13];

    t0 = *(int *)(((a4 << 2) + 0x8C20B048));
    *(unsigned int *)(((int)stk + 4)) = (kdGetDevice(t0));
    t2 = kdGetDeviceInfo(t0);
    if ((*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0))) == 0) {
        vmsfb_sleep();
        t67 = 0xFFFFFF01;
    } else {
        if (((*(int *)((t2 + 0x0))) & 2) == 0) {
            vmsfb_sleep();
            t63 = 0xFFFFFF01;
        } else {
            kdRecognizeChanged(t0);
            for (;;) {
                for (;;) {
                    kdGetDevice(t0);
                    t11 = kdSetGetMediaInfo(t0, 0x2, 0x0);
                    if ((int)t11 < 0) {
                        vmsfb_sleep();
                        continue;
                    }
                    break;
                }
                for (;;) {
                    t13 = kdGetStatus(t0, t11);
                    if (t13 == 0) {
                        vmsfb_sleep();
                        continue;
                    }
                    break;
                }
                t15 = kdGetDevice(t0);
                t16 = kdIsChanged(t0);
                if (t16 != 0) {
                    break;
                }
                t19 = *(signed char *)((t15 + 0x4));
                t20 = *(int *)((t15 + 0x8));
                if ((unsigned char)t19 != 8) {
                    if ((unsigned char)t19 != 0xFC) {
                        return 0xFFFFFF01;
                    }
                    continue;
                }
                *(unsigned int *)((a5 + 0x0)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0x8C464594) + 0xC)))))((t20 + 0x8), 0x0));
                *(unsigned int *)((a5 + 0x4)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0x8C464594) + 0xC)))))((t20 + 0x8), 0x2));
                *(unsigned int *)((a5 + 0x8)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0x8C464594) + 0xC)))))((t20 + 0x8), 0x4));
                *(unsigned int *)((a5 + 0xC)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0x8C464594) + 0xC)))))((t20 + 0x8), 0x6));
                *(unsigned int *)((a5 + 0x10)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0x8C464594) + 0xC)))))((t20 + 0x8), 0x8));
                *(unsigned int *)((a5 + 0x14)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0x8C464594) + 0xC)))))((t20 + 0x8), 0xA));
                *(unsigned int *)((a5 + 0x18)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0x8C464594) + 0xC)))))((t20 + 0x8), 0xC));
                *(unsigned int *)((a5 + 0x1C)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0x8C464594) + 0xC)))))((t20 + 0x8), 0x10));
                *(unsigned int *)((a5 + 0x20)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0x8C464594) + 0xC)))))((t20 + 0x8), 0x12));
                *(unsigned int *)((a5 + 0x34)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0x8C464594) + 0xC)))))((t20 + 0x8), 0x14));
                *(unsigned int *)((a5 + 0x38)) = 0x80;
                *(unsigned int *)((a5 + 0x24)) = (unsigned char)(*(signed char *)(((t20 + 0x8) + 0xE)));
                *(unsigned int *)((a5 + 0x28)) = (unsigned char)(*(signed char *)(((t20 + 0x8) + 0xF)));
                *(unsigned int *)((a5 + 0x2C)) = 0x1FF;
                t53 = kdGetDeviceInfo(t0);
                t54 = kdDevGetStorageInfo((((int)stk + 4) + 0x4), t53);
                if ((int)t54 >= 0) {
                    *(unsigned int *)((a5 + 0x3C)) = (unsigned short)(*(short *)(((int)stk + 14)));
                    *(unsigned int *)(((0x40 + a5) + 0x0)) = (unsigned short)(*(short *)(((int)stk + 12)));
                    *(unsigned int *)(((0x44 + a5) + 0x0)) = ((int)((int)0x200 / (int)(unsigned short)(*(short *)(((int)stk + 14)))));
                    *(unsigned int *)(((0x48 + a5) + 0x0)) = ((int)((int)0x200 / (int)(unsigned short)(*(short *)(((int)stk + 12)))));
                    return 0x0;
                }
                vmsfb_sleep();
                return 0xFFFFFF01;
            }
            vmsfb_sleep();
            t63 = 0xFFFFFF30;
        }
        t67 = t63;
    }
    return t67;
}

int menuItemTextPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int t54;
    int t50;
    int stk[18];

    stk[7] = a8;
    stk[8] = a9;
    stk[9] = a10;
    *(float *)(((((int)stk + 16) + 0xC) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x4))) - (1.0f + 1.0f));
    *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + 4.0f);
    t54 = a4;
    if ((unsigned int)a4 >= (unsigned int)0x10) {
    } else {
        switch ((a4 << 1)) {
            case 0:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (float)(*(int *)0x8C10F7C8));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
                t50 = (*(int *)0x8C1850D0);
            }
                break;
            case 2:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (float)(*(int *)0x8C10F7CC));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
                t50 = (*(int *)0x8C1850D4);
            }
                break;
            case 4:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (float)(*(int *)0x8C10F7D0));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
                t50 = (*(int *)0x8C1850D8);
            }
                break;
            case 6:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (float)(*(int *)0x8C10F7D4));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
                t50 = (*(int *)0x8C1850DC);
            }
                break;
            case 8:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (float)(*(int *)0x8C10F7D8));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
                t50 = (*(int *)0x8C1850E0);
            }
                break;
            case 10:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (float)(*(int *)0x8C10F7DC));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
                t50 = (*(int *)0x8C1850E4);
            }
                break;
            case 12:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (float)(*(int *)0x8C10F7E0));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
                t50 = (*(int *)0x8C1850E8);
            }
                break;
            case 14:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (float)(*(int *)0x8C10F7E4));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
                t50 = (*(int *)0x8C1850EC);
            }
                break;
            case 16:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (float)(*(int *)0x8C10F7E8));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
                t50 = (*(int *)0x8C1850F0);
            }
                break;
            case 18:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (float)(*(int *)0x8C10F7EC));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
                t50 = (*(int *)0x8C1850F4);
            }
                break;
            case 20:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (float)(*(int *)0x8C10F7F0));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
                t50 = (*(int *)0x8C1850F8);
            }
                break;
            case 22:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (float)(*(int *)0x8C10F7F4));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
                t50 = (*(int *)0x8C1850FC);
            }
                break;
            case 24:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (float)(*(int *)0x8C10F7F8));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
                t50 = (*(int *)0x8C185100);
            }
                break;
            case 26:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (float)(*(int *)0x8C10F7FC));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
                t50 = (*(int *)0x8C185104);
            }
                break;
            case 28:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (float)(*(int *)0x8C10F800));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
                t50 = (*(int *)0x8C185108);
            }
                break;
            default:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (float)(*(int *)0x8C10F804));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
                t50 = (*(int *)0x8C18510C);
            }
                break;
        }
        t54 = (menuTextMsgPut(t50, 0x8C10F7C8, a6, a7, *(Stk3 *)(((int)stk + 4)), f4));
    }
    return t54;
}

