/* Straight-line functions with calls and guards (batch gen_fy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int hudNumPut(int, Stk3, float);
int menuTextMsgPut(int, Stk3, float);
float nlSin(int);
int primLineH(int, int, Stk3, Stk3);
int primLineV(int, int, Stk3, Stk3);
int sprPutAt(int, Stk3);
Stk3 vecMake(float, float, float);
int emotGraphDraw(int a4);

int emotGraphDraw(int a4)
{
    int t2;
    float u6;
    int t7;
    int t59;
    int t60;
    float u76;
    int t92;
    int stk[65];

    *(unsigned int *)(((int)stk + 124)) = (a4 * 0x270);
    *(unsigned int *)(((int)stk + 116)) = (*(int *)((((a4 * 0x270) + 0x8C34B4F4) + 0x26C)));
    t2 = (int)((int)(*(int *)0x8C1AA4A4) / (int)0x78);
    *(unsigned short *)0x8C1AA4AC = ((*(short *)0x8C1AA4AC) + 0x300);
    *(unsigned int *)(((int)stk + 112)) = (((int)stk + 108) + 0x44);
    *(unsigned int *)(((((int)stk + 108) + 0x44) + 0x0)) = 0xFFFFFFFF;
    *(unsigned int *)(((((int)stk + 108) + 0x44) + 0x4)) = 0x80FF0000;
    *(unsigned int *)(((((int)stk + 108) + 0x44) + 0x8)) = 0x400000FF;
    *(unsigned int *)(((int)stk + 108)) = ((((int)stk + 108) + 0x44) + 0xC);
    *(unsigned int *)((((((int)stk + 108) + 0x44) + 0xC) + 0x0)) = 0xC8FFFFFF;
    *(unsigned int *)(((int)stk + 120)) = ((((int)stk + 108) + 0x44) + 0x10);
    u6 = 180.0f;
    u6 = u6 + 64.0f * (nlSin((unsigned short)(*(short *)0x8C1AA4AC)));
    *(unsigned int *)((((((int)stk + 108) + 0x44) + 0x10) + 0x0)) = (((((int)u6 & 0xFF) << 16) << 8) | 0xFF0000);
    *(unsigned int *)(((((int)stk + 108) + 0x44) + 0x14)) = 0x40FFFF00;
    t7 = *(int *)(((int)stk + 116));
    *(Stk3 *)((((int)stk + 108) + 0x38)) = vecMake(((*(float *)0x8C1AA498) + (float)(t7 * t2)), (*(float *)0x8C1AA49C), ((*(float *)0x8C1AA4A0) + -0.100000001f));
    *(Stk3 *)((((int)stk + 104) + 0x30)) = vecMake(((*(float *)0x8C1AA498) + (float)(t7 * t2)), ((*(float *)0x8C1AA49C) - (float)(*(int *)0x8C1AA4A8)), ((*(float *)0x8C1AA4A0) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((((int)stk + 104) + 0x30)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((((int)stk + 108) + 0x38)); }
    primLineV(0x1, (*(int *)(((*(int *)(((int)stk + 120))) + 0x0))), *(Stk3 *)(((int)stk + 76)), *(Stk3 *)(((int)stk + 88)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 104) + 0x30)) = *(struct mv3 *)((((int)stk + 108) + 0x38)); }
    *(float *)(((((int)stk + 108) + 0x38) + 0x4)) = ((*(float *)(((((int)stk + 108) + 0x38) + 0x4))) + 3.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((((int)stk + 108) + 0x38)); }
    hudNumPut((*(int *)(((int)stk + 116))), *(Stk3 *)(((int)stk + 64)), 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 108) + 0x38)) = *(struct mv3 *)(0x8C1AA498); }
    *(float *)(((((int)stk + 108) + 0x38) + 0x8)) = ((*(float *)(((((int)stk + 108) + 0x38) + 0x8))) - 0.00999999978f);
    *(Stk3 *)((((int)stk + 104) + 0x30)) = vecMake((((*(float *)0x8C1AA498) + (float)(*(int *)0x8C1AA4A4)) - (float)t2), (*(float *)0x8C1AA49C), ((*(float *)0x8C1AA4A0) + -0.00999999978f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 48)) = *(struct mv3 *)((((int)stk + 104) + 0x30)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)((((int)stk + 108) + 0x38)); }
    primLineH(0x1, (*(int *)(((*(int *)(((int)stk + 112))) + 0x0))), *(Stk3 *)(((int)stk + 36)), *(Stk3 *)(((int)stk + 48)));
    *(Stk3 *)((((int)stk + 108) + 0x38)) = vecMake((*(float *)0x8C1AA498), (*(float *)0x8C1AA49C), ((*(float *)0x8C1AA4A0) + -0.00999999978f));
    *(Stk3 *)((((int)stk + 104) + 0x30)) = vecMake((((*(float *)0x8C1AA498) + (float)(*(int *)0x8C1AA4A4)) - (float)t2), (*(float *)0x8C1AA49C), ((*(float *)0x8C1AA4A0) + -0.00999999978f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 104) + 0x30)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 108) + 0x38)); }
    primLineH(0x1, (*(int *)(((*(int *)(((int)stk + 108))) + 0x0))), *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 108) + 0x38)) = *(struct mv3 *)(0x8C1AA498); }
    *(float *)(((((int)stk + 108) + 0x38) + 0x8)) = ((*(float *)(((((int)stk + 108) + 0x38) + 0x8))) - 0.00999999978f);
    *(Stk3 *)((((int)stk + 104) + 0x30)) = vecMake((*(float *)0x8C1AA498), ((*(float *)0x8C1AA49C) - (float)(*(int *)0x8C1AA4A8)), ((*(float *)0x8C1AA4A0) + -0.00999999978f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 92)) = *(struct mv3 *)((((int)stk + 104) + 0x30)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 80)) = *(struct mv3 *)((((int)stk + 108) + 0x38)); }
    primLineV(0x1, (*(int *)(((*(int *)(((int)stk + 112))) + 0x0))), *(Stk3 *)(((int)stk + 80)), *(Stk3 *)(((int)stk + 92)));
    *(Stk3 *)((((int)stk + 108) + 0x38)) = vecMake((((*(float *)0x8C1AA498) + (float)(*(int *)0x8C1AA4A4)) - (float)t2), (*(float *)0x8C1AA49C), ((*(float *)0x8C1AA4A0) + -0.00999999978f));
    *(Stk3 *)((((int)stk + 104) + 0x30)) = vecMake((((*(float *)0x8C1AA498) + (float)(*(int *)0x8C1AA4A4)) - (float)t2), ((*(float *)0x8C1AA49C) - (float)(*(int *)0x8C1AA4A8)), ((*(float *)0x8C1AA4A0) + -0.00999999978f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 60)) = *(struct mv3 *)((((int)stk + 104) + 0x30)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 48)) = *(struct mv3 *)((((int)stk + 108) + 0x38)); }
    primLineV(0x1, (*(int *)(((*(int *)(((int)stk + 108))) + 0x0))), *(Stk3 *)(((int)stk + 48)), *(Stk3 *)(((int)stk + 60)));
    *(unsigned int *)(((int)stk + 108)) = 0x0;
    *(unsigned int *)(((int)stk + 120)) = 0x8C33A630;
    t59 = 0x8C33A630;
    t60 = 0x8C1AA4A4;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 108))) < (int)(*(int *)((((a4 * 0x270) + 0x8C34B4F4) + 0x264)))) {
            t60 = (*(int *)(((int)stk + 108)));
            t59 = t60;
            t60 = (t60 << 1);
            t60 = (t60 + t59);
            t60 = (t60 << 2);
            t59 = (*(int *)(((((a4 * 0x270) + 0x8C34B4F4) + t60) + 0x0)));
            t59 = (t59 * t2);
            *(Stk3 *)((((int)stk + 108) + 0x38)) = vecMake(((*(float *)0x8C1AA498) + (float)t59), (*(float *)0x8C1AA49C), ((*(float *)0x8C1AA4A0) + -0.100000001f));
            t59 = ((a4 * 0x270) + 0x8C34B4F4);
            t59 = (t59 + t60);
            *(Stk3 *)((((int)stk + 104) + 0x30)) = vecMake(((*(float *)0x8C1AA498) + (float)((*(int *)((t59 + 0x0))) * t2)), ((*(float *)0x8C1AA49C) + -10.0f), ((*(float *)0x8C1AA4A0) + -0.100000001f));
            t59 = 0x8C0F7DAC;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((((int)stk + 104) + 0x30)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((((int)stk + 108) + 0x38)); }
            t59 = 0x8C0BB65E;
            primLineV(0x1, (*(int *)(((*(int *)(((int)stk + 112))) + 0x0))), *(Stk3 *)(((int)stk + 76)), *(Stk3 *)(((int)stk + 88)));
            t59 = ((a4 * 0x270) + 0x8C34B4F4);
            u76 = *(float *)0x8C1AA4A0;
            t59 = (t59 + t60);
            *(unsigned int *)(((int)stk + 116)) = t59;
            *(Stk3 *)((((int)stk + 108) + 0x38)) = vecMake(((*(float *)0x8C1AA498) + (float)((*(int *)((t59 + 0x0))) * t2)), ((*(float *)0x8C1AA49C) - ((((*(float *)((t59 + 0x8))) * (float)(*(int *)0x8C1AA4A8))) * 8.0f)), (u76 + -0.100000001f));
            t59 = 0x8C0F7DAC;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 60)) = *(struct mv3 *)((((int)stk + 108) + 0x38)); }
            t59 = 0x8C08E840;
            sprPutAt((*(int *)(((int)stk + 120))), *(Stk3 *)(((int)stk + 60)));
            t59 = ((a4 * 0x270) + 0x8C34B4F4);
            t59 = (t59 + t60);
            *(float *)(((((int)stk + 108) + 0x38) + 0x4)) = ((*(float *)(((((int)stk + 108) + 0x38) + 0x4))) - 10.0f);
            *(float *)(((((int)stk + 108) + 0x38) + 0x0)) = ((*(float *)(((((int)stk + 108) + 0x38) + 0x0))) - 7.0f);
            *(float *)(((((int)stk + 108) + 0x38) + 0x8)) = ((*(float *)(((((int)stk + 108) + 0x38) + 0x8))) - 0.00100000005f);
            if ((*(int *)((t59 + 0x4))) == 0) {
                t59 = 0x8C0F7DAC;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 96)) = *(struct mv3 *)((((int)stk + 108) + 0x38)); }
                menuTextMsgPut(0x8C123258, *(Stk3 *)(((int)stk + 96)), 1.0f);
            } else {
                if ((*(int *)(((((a4 * 0x270) + 0x8C34B4F4) + t60) + 0x4))) == 1) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 96)) = *(struct mv3 *)((((int)stk + 108) + 0x38)); }
                    t92 = 0x8C12325C;
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 96)) = *(struct mv3 *)((((int)stk + 108) + 0x38)); }
                    t92 = 0x8C123260;
                }
                menuTextMsgPut(t92, *(Stk3 *)(((int)stk + 96)), 1.0f);
            }
            t59 = (*(int *)(((int)stk + 108)));
            t59 = (t59 + 0x1);
            *(unsigned int *)(((int)stk + 108)) = t59;
            continue;
        }
        break;
    }
    return 0x264;
}
