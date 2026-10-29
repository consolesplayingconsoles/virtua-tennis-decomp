/* Straight-line functions with calls and guards (batch gen_um): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int mtxGetAngles(int);
int nlObjPut(int);
int nlObjPutCheapEnvMap(int);
int nlObjPutSetGlobalAmbience(float);
int nlObjPutSetSaturate(float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlTranslate(float, float, float);
int sunPut(int a4, int a5, int a6, float f4);

int sunPut(int a4, int a5, int a6, float f4)
{
    int stk[14];
    register int t1;
    register float u2;
    register int t3;
    register float u4;
    register float u6;
    register float u7;
    register int t22;
    register int t24;
    register int t25;
    register int t47;
    register int t48;
    register int t28;
    register int t35;
    register int t51;
    register int t59;

    t1 = (int)((int)a5 % (int)(*(int *)((a4 + 0x0))));
    u2 = *(float *)0x8C40C2C8;
    t3 = *(int *)((((t1 << 2) + a4) + 0x4));
    u4 = u2;
    if (u2 > 255.0f) {
        u4 = 255.0f;
    }
    u6 = *(float *)0x8C38B7FC;
    u7 = u4;
    if (u6 > u4) {
        u7 = u6;
    }
    nlPushMatrix(0x0);
    nlTranslate((*(float *)(((t3 + a4) + 0x8))), (*(float *)(((t3 + a4) + 0xC))), (-(*(float *)(((t3 + a4) + 0x10)))));
    nlRotateAZ((-(*(short *)(((t3 + a4) + 0x6)))));
    nlRotateAY((*(short *)(((t3 + a4) + 0x4))));
    nlRotateAX((*(short *)(((t3 + a4) + 0x2))));
    if ((a6 != 0xCB4F8B0) && (a6 != 0xCB400F8)) {
    } else {
        nlPushMatrix(0x0);
        mtxGetAngles(((int)stk + 4));
        t22 = *(short *)(((int)stk + 4));
        if (t1 == 0) {
            *(unsigned int *)0x8C38BA1C = (unsigned short)t22;
            *(unsigned int *)0x8C38BA18 = (unsigned short)t22;
            t24 = *(short *)(((int)stk + 6));
            *(unsigned int *)0x8C38BA24 = (unsigned short)t24;
            *(unsigned int *)0x8C38BA20 = (unsigned short)t24;
        } else {
            t25 = *(int *)0x8C38BA1C;
            if ((int)(unsigned short)t22 > (int)t25) {
                if ((int)((unsigned short)t22 - t25) > (int)0x8000) {
                    t28 = ((*(int *)0x8C38BA18) - (int)((float)(0x10000 - ((unsigned short)t22 - t25)) * 1.0f));
                } else {
                    t28 = ((*(int *)0x8C38BA18) + (int)((float)((unsigned short)t22 - t25) * 1.0f));
                }
                *(unsigned int *)0x8C38BA18 = t28;
            } else {
                if ((int)(t25 - (unsigned short)t22) > (int)0x8000) {
                    t35 = ((*(int *)0x8C38BA18) + (int)((float)(0x10000 - (t25 - (unsigned short)t22)) * 1.0f));
                } else {
                    t35 = ((*(int *)0x8C38BA18) - (int)((float)(t25 - (unsigned short)t22) * 1.0f));
                }
                *(unsigned int *)0x8C38BA18 = t35;
            }
            t47 = *(short *)(((int)stk + 6));
            t48 = *(int *)0x8C38BA24;
            if ((int)(unsigned short)t47 > (int)t48) {
                if ((int)((unsigned short)t47 - t48) > (int)0x8000) {
                    t51 = ((*(int *)0x8C38BA20) - (int)((float)(0x10000 - ((unsigned short)t47 - t48)) * 1.0f));
                } else {
                    t51 = ((*(int *)0x8C38BA20) + (int)((float)((unsigned short)t47 - t48) * 1.0f));
                }
                *(unsigned int *)0x8C38BA20 = t51;
            } else {
                if ((int)(t48 - (unsigned short)t47) > (int)0x8000) {
                    t59 = ((*(int *)0x8C38BA20) + (int)((float)(0x10000 - (t48 - (unsigned short)t47)) * 1.0f));
                } else {
                    t59 = ((*(int *)0x8C38BA20) - (int)((float)(t48 - (unsigned short)t47) * 1.0f));
                }
                *(unsigned int *)0x8C38BA20 = t59;
            }
        }
        nlRotateAX((*(int *)0x8C38BA18));
        nlRotateAY((*(int *)0x8C38BA20));
        nlObjPutCheapEnvMap(a6);
        *(unsigned int *)0x8C38BA1C = (unsigned short)(*(short *)(((int)stk + 4)));
        *(unsigned int *)0x8C38BA24 = (unsigned short)(*(short *)(((int)stk + 6)));
        nlPopMatrix(0x1);
    }
    if (f4 != 1.0f) {
        nlScale(f4, f4, f4);
    }
    nlObjPutSetGlobalAmbience((u7 / 255.0f));
    nlObjPutSetSaturate(((float)(*(int *)0x8C301BF4) / 255.0f), ((float)(*(int *)0x8C301BF8) / 255.0f));
    nlObjPut(a6);
    if (a6 == 0xCB400F8) {
        nlObjPut(0xCB687F0);
    }
    nlObjPutSetSaturate((-1.0f), (-1.0f));
    nlObjPutSetGlobalAmbience(((*(float *)0x8C38B7FC) / 255.0f));
    return (nlPopMatrix(0x1));
}
