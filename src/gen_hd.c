/* Straight-line functions with calls and guards (batch gen_hd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlTranslate(float, float, float);
int stageSegaCourtDraw(int a4);

int stageSegaCourtDraw(int a4)
{
    register int t0;
    register int t1;

    if ((*(int *)0x8C287ADC) != 2) {
        nlObjPut(0xC8EAB70);
        nlObjPut(0xC51E510);
        if (a4 != 0) {
            t0 = (*(int *)0x8C18D2A0);
        } else {
            t0 = (*(int *)0x8C18D29C);
        }
        t1 = (nlObjPut(t0));
    } else {
        nlObjPut(0xC8C6830);
        nlObjPut(0xC5189E0);
        if (a4 != 0) {
            nlObjPut((*(int *)0x8C18D288));
            nlPushMatrix(0x0);
            nlTranslate(-40.5999985f, 0.0f, -196.300003f);
            nlObjPut((*(int *)0x8C18D290));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(0.0f, 0.0f, -196.300003f);
            nlObjPut((*(int *)0x8C18D290));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(40.5999985f, 0.0f, -196.300003f);
            nlObjPut((*(int *)0x8C18D290));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(-40.5999985f, 0.0f, 196.300003f);
            nlRotateAY(0x8000);
            nlObjPut((*(int *)0x8C18D290));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(0.0f, 0.0f, 196.300003f);
            nlRotateAY(0x8000);
            nlObjPut((*(int *)0x8C18D290));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(40.5999985f, 0.0f, 196.300003f);
            nlRotateAY(0x8000);
            nlObjPut((*(int *)0x8C18D290));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(100.0f, 0.0f, -62.9000015f);
            t0 = 0x8C18D298;
        } else {
            nlObjPut((*(int *)0x8C18D284));
            nlPushMatrix(0x0);
            nlTranslate(-40.5999985f, 0.0f, -196.300003f);
            nlObjPut((*(int *)0x8C18D28C));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(0.0f, 0.0f, -196.300003f);
            nlObjPut((*(int *)0x8C18D28C));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(40.5999985f, 0.0f, -196.300003f);
            nlObjPut((*(int *)0x8C18D28C));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(-40.5999985f, 0.0f, 196.300003f);
            nlRotateAY(0x8000);
            nlObjPut((*(int *)0x8C18D28C));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(0.0f, 0.0f, 196.300003f);
            nlRotateAY(0x8000);
            nlObjPut((*(int *)0x8C18D28C));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(40.5999985f, 0.0f, 196.300003f);
            nlRotateAY(0x8000);
            nlObjPut((*(int *)0x8C18D28C));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(100.0f, 0.0f, -62.9000015f);
            t0 = 0x8C18D294;
        }
        nlObjPut((*(int *)((t0 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(100.0f, 0.0f, -118.699997f);
        nlObjPut((*(int *)((t0 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(100.0f, 0.0f, 62.9000015f);
        nlObjPut((*(int *)((t0 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(100.0f, 0.0f, 118.699997f);
        nlObjPut((*(int *)((t0 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(-100.0f, 0.0f, 118.699997f);
        nlRotateAY(0x8000);
        nlObjPut((*(int *)((t0 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(-100.0f, 0.0f, -118.699997f);
        nlRotateAY(0x8000);
        nlObjPut((*(int *)((t0 + 0x0))));
        t1 = (nlPopMatrix(0x1));
    }
    return t1;
}
