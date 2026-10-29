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
