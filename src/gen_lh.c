/* Straight-line functions with calls and guards (batch gen_lh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern float _builtin_sqrtf(float);
float cpuDistXZ(int, int);
extern int cpuLineCrossXZ();
float cpuLineXAtZ(Stk3, Stk3, float);
float nlCos(int);
float nlPow(float, float);
int nlRand(void);
int cpuDblAimRateB(int a4, int a5);

