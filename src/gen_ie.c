/* Straight-line functions with calls and guards (batch gen_ie): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
extern float _builtin_sqrtf(float);
int camWorldToView(Stk4);
float hudNearAlpha(int);
int screenProject(int, int, Stk3);
float hudFadeNearPlayers(int a4, int a5, int a6);

float hudFadeNearPlayers(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t44;
    float t45;
    int t1;
    float u7;
    float u18;
    int t23;
    int t40;
    int t41;
    int t36;
    int stk[27];

    *(unsigned int *)(((int)stk + 40)) = a4;
    t0 = 0x8C08E520;
    t2 = 0x8C182808;
    t3 = a5;
    t4 = a6;
    t5 = 0x989680;
    t6 = 0x0;
    for (;;) {
        if ((int)t6 >= (int)(*(int *)0x8C287ADC)) {
            break;
        }
        t2 = 0xD78;
        t1 = (((int)stk + 32) + 0x18);
        t2 = (t6 * t2);
        t2 = (t2 + 0x8C287D84);
        t0 = 0xC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((0xAE8 + t2)); }
        t0 = 0x4;
        u7 = (*(float *)(((((int)stk + 32) + 0x18) + t0)));
        u7 = (u7 + 17.0f);
        *(float *)(((((int)stk + 32) + 0x18) + t0)) = u7;
        t0 = 0xC;
        t1 = ((int)stk + 20);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((((int)stk + 32) + 0x18)); }
        t1 = 0x8C01612E;
        *(int *)((int)stk + 16) = (((int)stk + 32) + 0xC);
        t0 = (camWorldToView(*(Stk4 *)((int)stk + 16)));
        t0 = 0xC;
        t1 = ((int)stk + 4);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((((int)stk + 32) + 0xC)); }
        t3 = ((int)stk + 4);
        t2 = ((int)stk + 4);
        t3 = (t3 + 0x20);
        t2 = (t2 + 0x1C);
        t0 = (screenProject(t2, t3, *(Stk3 *)((int)stk + 4)));
        t1 = 0xD2;
        *(unsigned int *)(((int)stk + 32)) = ((*(int *)(((int)stk + 32))) + 0x140);
        t0 = (*(int *)(((int)stk + 36)));
        t0 = (t0 + t1);
        *(unsigned int *)(((int)stk + 36)) = t0;
        if ((int)(*(int *)(((int)stk + 32))) < 0) {
            u7 = (float)(*(int *)(((int)stk + 32)));
            u7 = (u7 * (-1.0f));
            *(unsigned int *)(((int)stk + 32)) = (int)u7;
            u18 = u7;
        }
        u7 = u18;
        if ((int)(*(int *)(((int)stk + 36))) < 0) {
            t1 = 0x2710;
            *(unsigned int *)(((int)stk + 36)) = t1;
        }
        if (((int)(*(int *)(((int)stk + 32))) <= (int)0x3E8) && (t23 = *(int *)(((int)stk + 36)), t1 = t23, (int)t1 <= (int)0x3E8)) {
            if ((*(int *)(((int)stk + 40))) == 0) {
                t3 = (*(int *)(((int)stk + 32)));
                t4 = (*(int *)(((int)stk + 36)));
                t3 = (t3 - (*(int *)0x8C182808));
                t4 = (t4 - (*(int *)0x8C18280C));
                t2 = (t3 * t3);
                t36 = (t4 * t4);
            } else {
                t4 = (*(int *)(((int)stk + 32)));
                t3 = (*(int *)(((int)stk + 36)));
                t4 = (t4 - (*(int *)0x8C182810));
                t3 = (t3 - (*(int *)0x8C182814));
                t2 = (t4 * t4);
                t36 = (t3 * t3);
            }
            t2 = (t2 + t36);
            t40 = t3;
            t41 = t4;
        } else {
            t2 = 0x186A0;
        }
        t3 = t40;
        t4 = t41;
        t6 = (t6 + 0x1);
        if ((int)t2 < (int)t5) {
            t5 = t2;
        }
    }
    t44 = *(int *)(((int)stk + 40));
    *(int *)((int)stk + 28) = (0x8C3343AC + (t44 << 2));
    t45 = hudNearAlpha((int)_builtin_sqrtf((float)t5));
    *(float *)(((0x8C3343AC + (t44 << 2)) + 0x0)) = t45;
    return t45;
}
