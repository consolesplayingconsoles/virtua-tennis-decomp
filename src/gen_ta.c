/* Straight-line functions with calls and guards (batch gen_ta): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
int hudFont2DigitPut(int, Stk3, float);
int hudSignLastPut(float);
int hudSignPut(int, Stk3, float);
int markerShowStart(int, int, int, int, Stk3, Stk3, Stk3);
int primRectIncGradX(int, int, int, int, Stk3, Stk1);
int sprPutAtAlpha(int, Stk3, float);
int standBarDraw(int, int, int, int, int);
int standBoxesDraw(int, int, int, int, int, int, int, int, int, int, int, int);
Stk3 vecMake(float, float, float);
int standPanelDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);

