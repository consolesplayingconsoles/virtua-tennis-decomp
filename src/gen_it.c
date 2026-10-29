/* Straight-line functions with calls and guards (batch gen_it): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int angDiff(int, int);
int angLerp(int, int, float);
int camProject(int, int, Stk3);
int camWorldToView(Stk4);
int evSkidMarkSpawn(int, int, int);
int footMarkCheck(int, int, int, int, int, int, int, int, int, int, int, int);
int ikSolve2Bone(int, int, int, float, float, float, float);
int motionBone(int, int, int, int, int, int);
int motionBoneOffset(int);
int motionRootBone(int, int, int, int, int);
int motionSetCurrent(int);
int mtxGetWorldPos(int, int, int, int, int);
int nlArcSin(float);
extern int nlArcTan2();
int nlCalcPoint(int, int);
int nlCopyMatrix(int, int, int, int, float, float, float, float);
int nlGetMatrix(int);
int nlLoadMatrix(int);
int nlLoadMatrix33on44(int);
int nlMultiMatrix(int);
int nlMultiPushedMatrix(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlQuickInvertMatrix(void);
extern int nlRotateAX();
extern int nlRotateAY();
extern int nlRotateAZ();
int nlScale(float, float, float);
int nlSetTranslate(int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int perfMark(int);
int perfPrint(void);
int playerDrawModel(int);
int seFootstepCheck(int, int, int, int, int, int, int, int, int);
int swingBlurSpawn(int, int, int, int);
int swingTrackTip(int, int, int, int, int, int, int, int, int);
float vecDist(Stk3, Stk3);
float vecDistXZ(Stk3, Stk3);
float vecDistXZf(float, float, float, float);
Stk3 vecMake(float, float, float);
int playerPut(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);

