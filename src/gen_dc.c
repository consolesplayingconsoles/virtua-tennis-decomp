/* Straight-line functions with calls and guards (batch gen_dc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int hudFontNumPut(int, Stk3, float);
int memset(int, int, int);
int rankDrawCharaIcon(int, int, Stk3);
int rankDrawString(int, int, Stk3);
int rankDrawTbl1(Stk4 s);

int rankDrawTbl1(Stk4 s)
{
    int t2;
    int t25;
    int t26;
    int t27;
    int t30;
    int stk[50];

    stk[38] = s.w[0];
    stk[39] = s.w[1];
    stk[40] = s.w[2];
    stk[41] = s.w[3];
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 40) + 0x30)) = *(struct mv4 *)(0x8C126CC8); }
    *(float *)(((int)stk + 44)) = (*(float *)(((((int)stk + 40) + 0x70) + 0x0)));
    *(unsigned int *)(((int)stk + 40)) = (((int)stk + 40) + 0x24);
    *(unsigned int *)(((int)stk + 60)) = ((((int)stk + 40) + 0x24) + 0x2);
    *(unsigned int *)(((int)stk + 56)) = ((((int)stk + 40) + 0x24) + 0x3);
    *(unsigned int *)(((int)stk + 52)) = ((((int)stk + 40) + 0x24) + 0x4);
    *(unsigned int *)(((int)stk + 48)) = ((((int)stk + 40) + 0x24) + 0x5);
    *(float *)(((int)stk + 64)) = ((*(float *)(((int)stk + 44))) + 84.0f);
    t2 = 0x0;
    for (;;) {
        memset((((int)stk + 40) + 0x24), 0x0, 0x9);
        if (t2 != 9) {
            *(unsigned char *)(((*(int *)(((int)stk + 40))) + 0x0)) = (t2 + 0x31);
        } else {
            *(unsigned char *)(((*(int *)(((int)stk + 40))) + 0x0)) = 0x6A;
        }
        if (t2 == 0) {
            *(unsigned char *)((((((int)stk + 40) + 0x24) + 0x1) + 0x0)) = 0x73;
        } else {
            if (t2 == 1) {
                *(unsigned char *)((((((int)stk + 40) + 0x24) + 0x1) + 0x0)) = 0x6E;
            } else {
                if (t2 == 2) {
                    *(unsigned char *)((((((int)stk + 40) + 0x24) + 0x1) + 0x0)) = 0x72;
                } else {
                    *(unsigned char *)((((((int)stk + 40) + 0x24) + 0x1) + 0x0)) = 0x74;
                }
            }
        }
        *(unsigned char *)(((*(int *)(((int)stk + 60))) + 0x0)) = 0x5F;
        *(unsigned char *)(((*(int *)(((int)stk + 56))) + 0x0)) = 0x20;
        *(unsigned char *)(((*(int *)(((int)stk + 52))) + 0x0)) = 0x6B;
        *(unsigned int *)(((int)stk + 72)) = ((t2 << 2) << 1);
        t25 = (*(int *)(((int)stk + 48)));
        t26 = ((((t2 << 2) << 1) + 0x8C421E78) + 0x4);
        for (;;) {
            t27 = *(signed char *)((t26 + 0x0));
            t26 = (t26 + 0x1);
            *(unsigned char *)((t25 + 0x0)) = t27;
            t25 = (t25 + 0x1);
            if ((unsigned int)t25 >= (unsigned int)((((int)stk + 40) + 0x24) + 0x8)) {
                break;
            }
        }
        *(unsigned char *)((((((int)stk + 40) + 0x24) + 0x8) + 0x0)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x70)); }
        rankDrawString((((int)stk + 40) + 0x24), (((int)stk + 28) + 0x3C), *(Stk3 *)((((int)stk + 40) + 0x70)));
        *(float *)(((((int)stk + 40) + 0x70) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x70) + 0x0))) + 462.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0x70)); }
        t30 = *(int *)(((int)stk + 72));
        *(unsigned int *)(((int)stk + 68)) = (t30 + 0x8C421E78);
        hudFontNumPut((*(int *)(((t30 + 0x8C421E78) + 0x0))), *(Stk3 *)((((int)stk + 40) + 0x70)), 1.0f);
        *(float *)(((((int)stk + 40) + 0x70) + 0x0)) = (*(float *)(((int)stk + 64)));
        *(float *)(((((int)stk + 40) + 0x70) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x70) + 0x4))) + (1.0f + 1.0f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0x70)); }
        rankDrawCharaIcon((unsigned char)(*(signed char *)(((*(int *)(((int)stk + 68))) + 0x7))), 0xFFFFFFFF, *(Stk3 *)((((int)stk + 40) + 0x70)));
        t2 = (t2 + 0x1);
        *(float *)(((((int)stk + 40) + 0x70) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x70) + 0x4))) - (1.0f + 1.0f));
        *(float *)(((((int)stk + 40) + 0x70) + 0x0)) = (*(float *)(((int)stk + 44)));
        *(float *)(((((int)stk + 40) + 0x70) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x70) + 0x4))) + 27.0f);
        if ((int)t2 >= (int)0xA) {
            break;
        }
    }
    return 0x4;
}
