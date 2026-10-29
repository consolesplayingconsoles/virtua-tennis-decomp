/* Straight-line functions with calls and guards (batch gen_sn): generated from the code and checked by tests. Calls are
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

