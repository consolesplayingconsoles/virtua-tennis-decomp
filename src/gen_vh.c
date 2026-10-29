/* Straight-line functions with calls and guards (batch gen_vh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
float nlSin(int);
int nlTranslate(float, float, float);
int courtFraDrawAnim(void);

int courtFraDrawAnim(void)
{
    register int t0;
    register int t1;
    register float u0;

    nlPushMatrix(0x0);
    nlTranslate((*(float *)0x8C120B44), (*(float *)0x8C120B48), (*(float *)0x8C120B4C));
    u0 = nlSin((unsigned short)(*(short *)0x8C189FBC));
    nlRotateAY((int)(7168.0f * u0));
    nlObjPut((*(int *)((0x8C189D6C + ((*(int *)0x8C189FAC) << 2)))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslate((*(float *)0x8C120B50), (*(float *)0x8C120B54), (*(float *)0x8C120B58));
    u0 = nlSin((unsigned short)(*(short *)0x8C189FBE));
    nlRotateAY((int)(7168.0f * u0));
    nlObjPut((*(int *)(((((*(int *)0x8C189FB0) << 2) + 0x8C189D6C) + 0xC0))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslate((*(float *)0x8C120B5C), (*(float *)0x8C120B60), (*(float *)0x8C120B64));
    u0 = nlSin((unsigned short)(*(short *)0x8C189FC0));
    nlRotateAY((int)(7168.0f * u0));
    nlObjPut((*(int *)((((*(int *)0x8C189FB4) << 2) + 0x8C189EEC))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslate((*(float *)0x8C120B68), (*(float *)0x8C120B6C), (*(float *)0x8C120B70));
    u0 = nlSin((unsigned short)(*(short *)0x8C189FC2));
    nlRotateAY((int)(7168.0f * u0));
    nlObjPut((*(int *)((((*(int *)0x8C189FB8) << 2) + 0x8C189EEC))));
    t0 = *(int *)0x8C287C60;
    t1 = (nlPopMatrix(0x1));
    if (t0 == 0) {
        t0 = 0x8C189FBC;
        for (;;) {
            *(unsigned short *)((t0 + 0x0)) = ((*(short *)((t0 + 0x0))) + 0x100);
            t0 = (t0 + 0x2);
            if ((unsigned int)t0 >= (unsigned int)0x8C189FC4) {
                break;
            }
        }
        *(unsigned int *)0x8C189FAC = ((*(int *)0x8C189FAC) + 0x1);
        *(unsigned int *)0x8C189FB0 = ((*(int *)0x8C189FB0) + 0x1);
        *(unsigned int *)0x8C189FB4 = ((*(int *)0x8C189FB4) + 0x1);
        *(unsigned int *)0x8C189FB8 = ((*(int *)0x8C189FB8) + 0x1);
        *(unsigned int *)0x8C189FAC = ((int)((int)(*(int *)0x8C189FAC) % (int)0x30));
        *(unsigned int *)0x8C189FB0 = ((int)((int)(*(int *)0x8C189FB0) % (int)0x30));
        *(unsigned int *)0x8C189FB4 = ((int)((int)(*(int *)0x8C189FB4) % (int)0x30));
        t0 = (int)((int)(*(int *)0x8C189FB8) % (int)0x30);
        *(unsigned int *)0x8C189FB8 = t0;
        t1 = t0;
    }
    return t1;
}
