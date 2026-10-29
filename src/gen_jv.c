/* Straight-line functions with calls and guards (batch gen_jv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int _add(int, int, int);
int _lsft(int, int);
int _rsft(int, int);
int _sub(int, int, int, int);
int emotFaceVtxGet(int, int, int);
float mathLerp(float, float, float);
int memmove(int, int, int);
int memset(int, int, int);
int _div64(int a4, int a5, int a6, int a7);
int emotFaceMorph(int a4, int a5);

int _div64(int a4, int a5, int a6, int a7)
{
    int t1;
    int t7;
    int t8;
    int t11;
    int t20;
    int t35;
    int t65;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t50;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int stk[23];

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned short *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    memset((((int)stk + 4) + 0x2C), 0x0, 0x4);
    t1 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 4) + 0x2C) + 0x4);
    memmove(((((int)stk + 4) + 0x2C) + 0x4), t1, 0x8);
    memset((((int)stk + 4) + 0x20), 0x0, 0x4);
    memmove(((((int)stk + 4) + 0x20) + 0x4), (*(int *)(((int)stk + 8))), 0x8);
    memset((((int)stk + 4) + 0x10), 0x0, 0x10);
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x10) + 0xB);
    t8 = 0x42;
    for (;;) {
        if (t8 == 0) {
            break;
        }
        t7 = (_lsft((((int)stk + 4) + 0x10), 0xC));
        t7 = (_sub(0x0, (((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x20), 0xC));
        if ((int)t7 >= 0) {
            t11 = *(int *)(((int)stk + 4));
            *(unsigned char *)((t11 + 0x0)) = ((*(signed char *)((t11 + 0x0))) + 0x1);
        } else {
            t7 = (_add((((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x20), 0xC));
        }
        t7 = (_lsft((((int)stk + 4) + 0x2C), 0xC));
        t8 = (t8 - 1);
    }
    t20 = 0x2;
    for (;;) {
        if (t20 == 0) {
            break;
        }
        _rsft((((int)stk + 4) + 0x10), 0x10);
        t20 = (t20 - 1);
    }
    t35 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0x0));
    if ((t35 == 0) && ((t36 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0x1)), t36 == 0) && ((t37 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0x2)), t37 == 0) && ((t38 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0x3)), t38 == 0) && ((t39 = *(int *)(((int)stk + 16)), t40 = *(signed char *)((t39 + 0x0)), t40 == 0) && ((t41 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0x5)), t41 == 0) && ((t42 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0x6)), t42 == 0) && ((t43 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0x7)), t43 == 0) && ((t44 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0x8)), t44 == 0) && ((t45 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0x9)), t45 == 0) && ((t46 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0xA)), t46 == 0) && (t47 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0xB)), t47 == 0)))))))))))) {
        t50 = t40;
    } else {
        *(unsigned char *)(((((int)stk + 4) + 0x10) + 0xC)) = ((*(signed char *)(((((int)stk + 4) + 0x10) + 0xC))) | 0x20);
        t50 = t35;
    }
    *(unsigned short *)((a4 + 0x0)) = ((*(short *)(((int)stk + 12))) - (*(short *)((a4 + 0x0))));
    if (((*(signed char *)(((((int)stk + 4) + 0x10) + 0x4))) == 0) && ((t55 = *(signed char *)(((((int)stk + 4) + 0x10) + 0x5)), t55 == 0) && ((t56 = *(signed char *)(((((int)stk + 4) + 0x10) + 0x6)), t56 == 0) && ((t57 = *(signed char *)(((((int)stk + 4) + 0x10) + 0x7)), t57 == 0) && ((t58 = *(signed char *)(((((int)stk + 4) + 0x10) + 0x8)), t58 == 0) && ((t59 = *(signed char *)(((((int)stk + 4) + 0x10) + 0x9)), t59 == 0) && ((t60 = *(signed char *)(((((int)stk + 4) + 0x10) + 0xA)), t60 == 0) && ((t61 = *(int *)(((int)stk + 4)), t62 = *(signed char *)((t61 + 0x0)), t62 == 0) && (t63 = *(signed char *)(((((int)stk + 4) + 0x10) + 0xC)), t63 == 0))))))))) {
    } else {
        t65 = t50;
        for (;;) {
            if (((unsigned char)(*(signed char *)((((((int)stk + 4) + 0x10) + 0x4) + 0x0))) & 0x80) != 0) {
                break;
            }
            _lsft(((((int)stk + 4) + 0x10) + 0x4), 0x9);
            t65 = (*(short *)((a4 + 0x0)));
            t65 = (t65 - 1);
            *(unsigned short *)((a4 + 0x0)) = t65;
        }
    }
    return (memmove((*(int *)(((int)stk + 8))), ((((int)stk + 4) + 0x10) + 0x4), 0x9));
}

int emotFaceMorph(int a4, int a5)
{
    int t1;
    float u3;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t11;
    int t14;
    int t30;
    int t10;
    int stk[16];

    *(unsigned int *)(((int)stk + 4)) = (a4 << 2);
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((a4 << 2) + 0x8C1AA4BC)));
    t1 = *(int *)((((a5 * 0x270) + 0x8C34B4F4) + 0x268));
    *(unsigned int *)(((int)stk + 12)) = (*(int *)((((((t1 << 1) + t1) << 2) + ((a5 * 0x270) + 0x8C34B4F4)) + 0x4)));
    u3 = *(float *)((((((t1 << 1) + t1) << 2) + ((a5 * 0x270) + 0x8C34B4F4)) + 0x8));
    t5 = *(int *)(((int)stk + 4));
    t6 = *(int *)(((int)stk + 12));
    t7 = (emotFaceVtxGet(a4, 0x0, 0x0));
    t8 = t6;
    t9 = 0x0;
    for (;;) {
        t11 = emotFaceVtxGet(a4, t9, 0x0);
        if (t11 == -1) {
            break;
        }
        t10 = (*(int *)(((int)stk + 8)));
        t10 = (t10 + ((emotFaceVtxGet(a4, t9, 0x1)) << 2));
        t14 = emotFaceVtxGet(a4, t9, 0x0);
        if (t7 != t14) {
            t8 = (t8 + 0x3);
        }
        t7 = t8;
        t7 = (t7 << 1);
        *(unsigned int *)(((int)stk + 4)) = t8;
        t7 = (t7 + t8);
        t7 = (t7 << 2);
        *(float *)((t10 + 0x0)) = (mathLerp((*(float *)((t10 + 0x0))), (*(float *)((((*(int *)(((t5 + 0x8C1AA504) + 0x0))) + t7) + 0x0))), u3));
        *(unsigned int *)((t10 + 0x0)) = ((*(int *)((t10 + 0x0))) | 0x1);
        t10 = (t10 + 0x4);
        *(float *)((t10 + 0x0)) = (mathLerp((*(float *)((t10 + 0x0))), (*(float *)((((*(int *)(((t5 + 0x8C1AA504) + 0x0))) + t7) + 0x4))), u3));
        t10 = (t10 + 0x4);
        t7 = (t7 + (*(int *)(((t5 + 0x8C1AA504) + 0x0))));
        *(float *)((t10 + 0x0)) = (mathLerp((*(float *)((t10 + 0x0))), (*(float *)((t7 + 0x8))), u3));
        t30 = emotFaceVtxGet(a4, t9, 0x0);
        t9 = (t9 + 0x1);
        t7 = t30;
    }
    return t11;
}
