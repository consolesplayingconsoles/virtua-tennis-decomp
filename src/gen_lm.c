/* Straight-line functions with calls and guards (batch gen_lm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
int angDiff(int, int);
int angLerp(int, int, float);
int motionIsEnd(int);
extern int nlArcTan2();
float nlCos(int);
float nlPow(float, float);
float nlSin(int);
int nlSubVector3op(int, int, int);
int playerPivotTurn(int, int, int, int, int);
float vecDistXZ(Stk3, Stk3);
float vecLength(Stk3, Stk1);
void playerMoveToTarget(int a4);

