/* Straight-line functions with calls and guards (batch gen_so): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Player[];

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
    R4 = a4;
    *(unsigned int *)(((int)stk + 72)) = R4;
    *(unsigned int *)(((int)stk + 76)) = (*(int *)((((*(int *)((((R4 * 0xD78) + (int)Player) + 0xC58))) << 2) + 0x8C10DFD4)));
    *(int *)((int)stk + 68) = (((int)stk + 72) + 0x48);
    *(Stk3 *)((((int)stk + 72) + 0x48)) = vecMake(0.0f, 0.0f, 1.0f);
    nlGetMatrix((((int)stk + 68) + 0xC));
    nlPushMatrix(0x0);
    nlLoadMatrix(0x8C287978);
    nlMultiMatrix((((int)stk + 68) + 0xC));
    nlGetMatrix((((int)stk + 68) + 0xC));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    { struct mv16 { int w[16]; }; *(struct mv16 *)(((int)stk + 4)) = *(struct mv16 *)((((int)stk + 68) + 0xC)); }
    hudImpactSpawn((*(int *)(((int)stk + 76))), *(Stk16 *)(((int)stk + 4)), (*(float *)((((*(int *)(((int)stk + 72))) << 2) + 0x8C334384))));
    return (nlPopMatrix(0x1));
}
