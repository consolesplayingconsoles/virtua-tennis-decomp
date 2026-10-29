/* Straight-line functions with calls and guards (batch gen_ue): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int sprPutAtAlpha(int, Stk3, float);
int menuTextMsgPut(int a4, int a5, int a6, int a7, int a8, float f4);

int menuTextMsgPut(int a4, int a5, int a6, int a7, int a8, float f4)
{
    int stk[127];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u8;
    register float u6;
    register float u7;
    register float u9;
    register int t295;
    register int t297;
    register int t298;
    register float u299;
    register int t290;
    register int t292;
    register int t293;
    register float u294;

    stk[118] = a8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x194 + ((int)stk + 16))) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
    *(unsigned int *)(((int)stk + 20)) = 0x8C1849C8;
    *(unsigned int *)(((int)stk + 16)) = 0x8C33538C;
    *(unsigned int *)(((int)stk + 24)) = 0x8C1849D8;
    *(unsigned int *)(((int)stk + 28)) = 0x8C3353DC;
    *(unsigned int *)(((int)stk + 32)) = 0x8C1849E8;
    *(unsigned int *)(((int)stk + 36)) = 0x8C33542C;
    *(unsigned int *)(((int)stk + 416)) = 0x8C184A08;
    *(unsigned int *)(((int)stk + 412)) = 0x8C3354CC;
    *(unsigned int *)(((int)stk + 408)) = 0x8C184A18;
    *(unsigned int *)(((int)stk + 404)) = 0x8C33551C;
    *(unsigned int *)(((int)stk + 400)) = 0x8C184A28;
    *(unsigned int *)(((int)stk + 396)) = 0x8C33556C;
    *(unsigned int *)(((int)stk + 392)) = 0x8C184A38;
    *(unsigned int *)(((int)stk + 388)) = 0x8C3355BC;
    *(unsigned int *)(((int)stk + 384)) = 0x8C184A48;
    *(unsigned int *)(((int)stk + 380)) = 0x8C33560C;
    *(unsigned int *)(((int)stk + 376)) = 0x8C184A58;
    *(unsigned int *)(((int)stk + 372)) = 0x8C33565C;
    *(unsigned int *)(((int)stk + 368)) = 0x8C184A68;
    *(unsigned int *)(((int)stk + 364)) = 0x8C3356AC;
    *(unsigned int *)(((int)stk + 360)) = 0x8C184A78;
    *(unsigned int *)(((int)stk + 356)) = 0x8C3356FC;
    *(unsigned int *)(((int)stk + 352)) = 0x8C184A88;
    *(unsigned int *)(((int)stk + 348)) = 0x8C33574C;
    *(unsigned int *)(((int)stk + 344)) = 0x8C184A98;
    *(unsigned int *)(((int)stk + 340)) = 0x8C33579C;
    *(unsigned int *)(((int)stk + 336)) = 0x8C184AA8;
    *(unsigned int *)(((int)stk + 332)) = 0x8C3357EC;
    *(unsigned int *)(((int)stk + 328)) = 0x8C184AB8;
    *(unsigned int *)(((int)stk + 324)) = 0x8C33583C;
    *(unsigned int *)(((int)stk + 320)) = 0x8C184AC8;
    *(unsigned int *)(((int)stk + 316)) = 0x8C33588C;
    *(unsigned int *)(((int)stk + 312)) = 0x8C184AD8;
    *(unsigned int *)(((int)stk + 308)) = 0x8C3358DC;
    *(unsigned int *)(((int)stk + 304)) = 0x8C184AE8;
    *(unsigned int *)(((int)stk + 300)) = 0x8C33592C;
    *(unsigned int *)(((int)stk + 296)) = 0x8C184AF8;
    *(unsigned int *)(((int)stk + 292)) = 0x8C33597C;
    *(unsigned int *)(((int)stk + 288)) = 0x8C184B08;
    *(unsigned int *)(((int)stk + 284)) = 0x8C3359CC;
    *(unsigned int *)(((int)stk + 280)) = 0x8C184B18;
    *(unsigned int *)(((int)stk + 276)) = 0x8C335A1C;
    *(unsigned int *)(((int)stk + 272)) = 0x8C184B28;
    *(unsigned int *)(((int)stk + 268)) = 0x8C335A6C;
    *(unsigned int *)(((int)stk + 264)) = 0x8C184B38;
    *(unsigned int *)(((int)stk + 260)) = 0x8C335ABC;
    *(unsigned int *)(((int)stk + 256)) = 0x8C184B48;
    *(unsigned int *)(((int)stk + 252)) = 0x8C335B0C;
    *(unsigned int *)(((int)stk + 248)) = 0x8C184B58;
    *(unsigned int *)(((int)stk + 244)) = 0x8C335B5C;
    *(unsigned int *)(((int)stk + 240)) = 0x8C184B68;
    *(unsigned int *)(((int)stk + 236)) = 0x8C335BAC;
    *(unsigned int *)(((int)stk + 232)) = 0x8C184B78;
    *(unsigned int *)(((int)stk + 228)) = 0x8C335BFC;
    *(unsigned int *)(((int)stk + 224)) = 0x8C184B88;
    *(unsigned int *)(((int)stk + 220)) = 0x8C335C4C;
    *(unsigned int *)(((int)stk + 216)) = 0x8C184B98;
    *(unsigned int *)(((int)stk + 212)) = 0x8C335C9C;
    *(unsigned int *)(((int)stk + 208)) = 0x8C184BA8;
    *(unsigned int *)(((int)stk + 204)) = 0x8C335CEC;
    *(unsigned int *)(((int)stk + 200)) = 0x8C184BB8;
    *(unsigned int *)(((int)stk + 196)) = 0x8C335D3C;
    *(unsigned int *)(((int)stk + 192)) = 0x8C184BC8;
    *(unsigned int *)(((int)stk + 188)) = 0x8C335D8C;
    *(unsigned int *)(((int)stk + 184)) = 0x8C184BD8;
    *(unsigned int *)(((int)stk + 180)) = 0x8C335DDC;
    *(unsigned int *)(((int)stk + 176)) = 0x8C184BE8;
    *(unsigned int *)(((int)stk + 172)) = 0x8C335E2C;
    *(unsigned int *)(((int)stk + 168)) = 0x8C184BF8;
    *(unsigned int *)(((int)stk + 164)) = 0x8C335E7C;
    *(unsigned int *)(((int)stk + 160)) = 0x8C184C08;
    *(unsigned int *)(((int)stk + 156)) = 0x8C335ECC;
    *(unsigned int *)(((int)stk + 152)) = 0x8C184C18;
    *(unsigned int *)(((int)stk + 148)) = 0x8C335F1C;
    *(unsigned int *)(((int)stk + 144)) = 0x8C184C28;
    *(unsigned int *)(((int)stk + 140)) = 0x8C335F6C;
    *(unsigned int *)(((int)stk + 136)) = 0x8C184C38;
    *(unsigned int *)(((int)stk + 132)) = 0x8C335FBC;
    *(unsigned int *)(((int)stk + 128)) = 0x8C184C48;
    *(unsigned int *)(((int)stk + 124)) = 0x8C33600C;
    *(unsigned int *)(((int)stk + 120)) = 0x8C184C58;
    *(unsigned int *)(((int)stk + 116)) = 0x8C33605C;
    *(unsigned int *)(((int)stk + 112)) = 0x8C184C68;
    *(unsigned int *)(((int)stk + 108)) = 0x8C3360AC;
    *(unsigned int *)(((int)stk + 104)) = 0x8C184C78;
    *(unsigned int *)(((int)stk + 100)) = 0x8C3360FC;
    *(unsigned int *)(((int)stk + 96)) = 0x8C184C88;
    *(unsigned int *)(((int)stk + 92)) = 0x8C33614C;
    *(unsigned int *)(((int)stk + 88)) = 0x8C184C98;
    *(unsigned int *)(((int)stk + 84)) = 0x8C33619C;
    *(unsigned int *)(((int)stk + 80)) = 0x8C184CA8;
    *(unsigned int *)(((int)stk + 76)) = 0x8C3361EC;
    *(unsigned int *)(((int)stk + 72)) = 0x8C184CB8;
    *(unsigned int *)(((int)stk + 68)) = 0x8C33623C;
    *(unsigned int *)(((int)stk + 64)) = 0x8C184CC8;
    *(unsigned int *)(((int)stk + 60)) = 0x8C33628C;
    *(unsigned int *)(((int)stk + 56)) = 0x8C184CD8;
    *(unsigned int *)(((int)stk + 52)) = 0x8C3362DC;
    *(unsigned int *)(((int)stk + 48)) = 0x8C184CE8;
    *(unsigned int *)(((int)stk + 44)) = 0x8C33632C;
    *(unsigned int *)(((int)stk + 40)) = 0x8C184CF8;
    t0 = 0x40;
    t1 = 0x8C184CE8;
    t2 = 0x8C184CF8;
    t3 = 0x8C184930;
    t4 = 0x8C33506C;
    t5 = a4;
    u8 = f4;
    for (;;) {
        if ((*(signed char *)((t5 + 0x0))) != 0) {
            t0 = (*(signed char *)((t5 + 0x0)));
            u9 = 1.0f;
            t0 = (t0 - 46);
            t1 = 0x4D;
            if ((unsigned int)t0 >= (unsigned int)t1) {
                t0 = 0x8C093F60;
                u7 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                u8 = (*(float *)((t0 + 0x0)));
                u7 = (u7 + u8);
                *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u7;
                t295 = t1;
                t297 = t3;
                t298 = t4;
                u299 = u8;
            } else {
                t0 = (t0 << 1);
                t1 = t0;
                switch (t1) {
                    case 0:
                    {
                        u7 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        t0 = 0xC;
                        t2 = 0x8C0F7DAC;
                        u7 = (u7 + u9);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u7;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        u8 = f4;
                        t3 = 0x8C33637C;
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        u7 = (*(float *)0x8C184D08);
                        t2 = (int)u7;
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 2:
                    case 4:
                    case 6:
                    case 8:
                    case 10:
                    case 12:
                    case 14:
                    case 16:
                    case 18:
                    case 20:
                    case 22:
                    case 24:
                    case 26:
                    case 28:
                    case 30:
                    case 32:
                    case 34:
                    case 36:
                    case 90:
                    case 92:
                    case 94:
                    case 96:
                    case 98:
                    case 100:
                    {
                        t0 = 0x8C093F60;
                        u7 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u8 = (*(float *)((t0 + 0x0)));
                        u7 = (u7 + u8);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u7;
                        t290 = t1;
                        t292 = t3;
                        t293 = t4;
                        u294 = u8;
                    }
                        break;
                    case 38:
                    {
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        u8 = f4;
                        t3 = 0x8C33533C;
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t2 = (*(int *)(((int)stk + 20)));
                        u7 = (*(float *)((t2 + 0x0)));
                        u7 = (float)((int)u7 - 2);
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                        u7 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u7 = (u7 - u9);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u7;
                    }
                        break;
                    case 40:
                    {
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        u8 = f4;
                        t3 = (*(int *)(((int)stk + 16)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        u7 = (*(float *)(((*(int *)(((int)stk + 24))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 42:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        u8 = f4;
                        t3 = (*(int *)(((int)stk + 28)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        u7 = (*(float *)(((*(int *)(((int)stk + 32))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 44:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        u8 = f4;
                        t3 = (*(int *)(((int)stk + 36)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        u7 = (*(float *)0x8C1849F8);
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 46:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        u8 = f4;
                        t3 = 0x8C33547C;
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x190;
                        t2 = (*(int *)((((int)stk + 16) + t0)));
                        u7 = (*(float *)((t2 + 0x0)));
                        u7 = (float)((int)u7 - 2);
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 48:
                    {
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x198;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x188;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 50:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x190;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x180;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 52:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x188;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x178;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 54:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x180;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x170;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 56:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x178;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x168;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 58:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x170;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x160;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 60:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x168;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x158;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 62:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x160;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x150;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 64:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x158;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x148;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 66:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x150;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x140;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 68:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x148;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x138;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 70:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x140;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x130;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 72:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x138;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x128;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 74:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x130;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x120;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 76:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x128;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x118;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 78:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x120;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x110;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 80:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x118;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x108;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 82:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x110;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x100;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 84:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x108;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0xF8;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 86:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x100;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0xF0;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 88:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0xF8;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0xE8;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 102:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0xF0;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0xE0;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 104:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0xE8;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0xD8;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 106:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0xE0;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0xD0;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 108:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0xD8;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0xC8;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 110:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0xD0;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0xC0;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 112:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0xC8;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0xB8;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 114:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0xC0;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0xB0;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 116:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0xB8;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0xA8;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 118:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0xB0;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0xA0;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 120:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0xA8;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x98;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 122:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0xA0;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x90;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 124:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x98;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x88;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 126:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x90;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x80;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 128:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x88;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x78;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 130:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x80;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x70;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 132:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x78;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x68;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 134:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x70;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x60;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 136:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x68;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x58;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                        u7 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u7 = (u7 - u9);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u7;
                    }
                        break;
                    case 138:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x60;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x50;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                        u7 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u7 = (u7 - u9);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u7;
                    }
                        break;
                    case 140:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x58;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x48;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 142:
                    {
                        t0 = 0x4;
                        t2 = 0x8C0F7DAC;
                        u7 = (*(float *)(((0x1C8 + ((int)stk + 16)) + t0)));
                        u7 = (u7 + u9);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + t0)) = u7;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x50;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        t0 = 0x40;
                        u7 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                        t0 = 0x4;
                        u7 = (*(float *)(((0x1C8 + ((int)stk + 16)) + t0)));
                        u7 = (u7 - u9);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + t0)) = u7;
                    }
                        break;
                    case 144:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x48;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        u7 = (*(float *)(((*(int *)(((int)stk + 72))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 146:
                    {
                        t0 = 0x4;
                        t2 = 0x8C0F7DAC;
                        u7 = (*(float *)(((0x1C8 + ((int)stk + 16)) + t0)));
                        u7 = (u7 + u9);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + t0)) = u7;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        t0 = 0x40;
                        u8 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        u7 = (*(float *)(((*(int *)(((int)stk + 64))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 4);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                        t0 = 0x4;
                        u7 = (*(float *)(((0x1C8 + ((int)stk + 16)) + t0)));
                        u7 = (u7 - u9);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + t0)) = u7;
                    }
                        break;
                    case 148:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        u8 = f4;
                        t3 = (*(int *)(((int)stk + 60)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        u7 = (*(float *)(((*(int *)(((int)stk + 56))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    case 150:
                    {
                        t2 = 0x8C0F7DAC;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        u8 = f4;
                        t3 = (*(int *)(((int)stk + 52)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        u7 = (*(float *)(((*(int *)(((int)stk + 48))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                    }
                        break;
                    default:
                    {
                        t0 = 0x4;
                        t2 = 0x8C0F7DAC;
                        u7 = (*(float *)(((0x1C8 + ((int)stk + 16)) + t0)));
                        u7 = (u7 + u9);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + t0)) = u7;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0x1C8 + ((int)stk + 16))); }
                        t2 = 0x8C08E944;
                        u8 = f4;
                        t3 = (*(int *)(((int)stk + 44)));
                        t0 = (sprPutAtAlpha(t3, *(Stk3 *)((int)stk + 4), u8));
                        u6 = (*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)));
                        u7 = (*(float *)(((*(int *)(((int)stk + 40))) + 0x0)));
                        t2 = (int)u7;
                        t2 = (t2 - 2);
                        u7 = (float)t2;
                        u6 = (u6 + u7);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + 0x0)) = u6;
                        t0 = 0x4;
                        u7 = (*(float *)(((0x1C8 + ((int)stk + 16)) + t0)));
                        u7 = (u7 - u9);
                        *(float *)(((0x1C8 + ((int)stk + 16)) + t0)) = u7;
                    }
                        break;
                }
                t295 = t290;
                t297 = t292;
                t298 = t293;
                u299 = u294;
            }
            u8 = u299;
            t1 = t295;
            t5 = (t5 + 0x1);
            t3 = t297;
            t4 = t298;
            continue;
        }
        break;
    }
    return (int)((*(float *)(((0x1C8 + ((int)stk + 16)) + 0x0))) - (*(float *)(((int)stk + 420))));
}
