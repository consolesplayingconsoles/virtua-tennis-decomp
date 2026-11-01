/* Straight-line functions with calls and guards (batch gen_so): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[16]; } Stk16;
int hudImpactSpawn(int, Stk16, float);
int nlGetMatrix(int);
int nlLoadMatrix(int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
Stk3 vecMake(float, float, float);
int swingBlurSpawn(int a4);

int swingBlurSpawn(int a4)
{
    int stk[41];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    float F4;
    float F5;
    float F6;
    float F15;
    int T_;
    int R1068;
    int R1072;
    int R1076;
    R1068 = *(int *)((int)stk + 68);
    R1072 = *(int *)((int)stk + 72);
    R1076 = *(int *)((int)stk + 76);
    R4 = a4;
    R1072 = R4;
    R1076 = (*(int *)((((*(int *)((((R4 * 0xD78) + 0x8C287D84) + 0xC58))) << 2) + 0x8C10DFD4)));
    R1068 = (((int)stk + 72) + 0x48);
    *(Stk3 *)((((int)stk + 72) + 0x48)) = vecMake(0.0f, 0.0f, 1.0f);
    nlGetMatrix((((int)stk + 68) + 0xC));
    nlPushMatrix(0x0);
    nlLoadMatrix(0x8C287978);
    nlMultiMatrix((((int)stk + 68) + 0xC));
    nlGetMatrix((((int)stk + 68) + 0xC));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    { struct mv16 { int w[16]; }; *(struct mv16 *)(((int)stk + 4)) = *(struct mv16 *)((((int)stk + 68) + 0xC)); }
    hudImpactSpawn((R1076), *(Stk16 *)(((int)stk + 4)), (*(float *)((((R1072) << 2) + 0x8C334384))));
    return (nlPopMatrix(0x1));
}
