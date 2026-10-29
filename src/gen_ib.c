/* Straight-line functions with calls and guards (batch gen_ib): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int camViewToWorld(int, int, int, int, int);
int nlArcTan2(float, float);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlGetTranslate(int);
int nlLoadMatrix(int, float, float, float, float, float, float);
int nlMultiMatrix(int);
int nlObjPut(int);
int nlObjPutCheapEnvMap(int);
int nlObjPutTrnsl(int, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlQuickInvertMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int playerDrawNodeFacing(int a4, float f4, float f5, float f6, float f7, float f8, float f9);
int sklDrawNodeTrnsl(int a4, float f4, float f5, float f6, float f7, float f8, float f9);


int sklDrawNodeTrnsl(int a4, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int t6;
    int t14;
    int t15;
    int t17;
    int t30;
    int t33;
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t9;

    t6 = a4;
    for (;;) {
        nlLoadMatrix((0xC0 + t6), f4, f5, f6, f7, f8, f9);
        if (((int)(*(int *)((t6 + 0x3C))) > 0) && (t9 = *(int *)((t6 + 0x38)), t9 != 0)) {
            t2 = (*(int *)((t6 + 0x38)));
            nlPushMatrix(0x0);
            nlQuickInvertMatrix();
            nlMultiMatrix((0xC0 + t2));
            t14 = *(int *)((t6 + 0x3C));
            t3 = 0x0;
            t5 = 0x0;
            if ((int)t14 > 0) {
                for (;;) {
                    t15 = *(int *)((t2 + 0x4));
                    t4 = (*(int *)((t6 + 0x4)));
                    t17 = *(int *)((((t6 + 0x40) + t5) + 0x0));
                    t4 = (t4 + (*(int *)((((0x80 + t6) + t5) + 0x0))));
                    t0 = (t17 + t15);
                    t1 = t4;
                    t1 = (t1 + 0xC);
                    t0 = (t0 + 0xC);
                    nlCalcPoint((t17 + t15), t4);
                    nlCalcVector(t0, t1);
                    t3 = (t3 + 0x1);
                    *(unsigned int *)((t4 + 0x0)) = ((*(int *)((t4 + 0x0))) | 0x1);
                    t5 = (t5 + 0x4);
                    if ((int)t3 >= (int)t14) {
                        break;
                    }
                }
            }
            nlPopMatrix(0x1);
        }
        t30 = *(int *)((t6 + 0x2C));
        t33 = (nlObjPutTrnsl((*(int *)((t6 + 0x4))), f4));
        if (t30 != 0) {
            t33 = (((int (*)(int, float))(sklDrawNodeTrnsl))((*(int *)((t6 + 0x2C))), f4));
        }
        if ((*(int *)((t6 + 0x30))) != 0) {
            t6 = (*(int *)((t6 + 0x30)));
            continue;
        }
        break;
    }
    return t33;
}
