/* Straight-line functions with calls and guards (batch gen_bu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int courtAusDrawNumber(int);
extern int cursorBoxPut();
int entryAnyAtRound5(void);
int entryIsVersus(int, int, int, int);
int entryRecordResult(int);
int hudNumberDraw(int, Stk3, float);
int menuIconPut(int, Stk3);
float nlCos(int);
int nlDispStripTrnsl(int, int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlTranslate(float, float, float);
int phraseBigWordPut(int, Stk3);
int primSprDraw(int, int, int, int, Stk3);
int primVertexSet(int, int, int, int, int);
int resGetModelLoad(int);
int resGetTexLoad(int);
int resSpGetFree(int, int);
int resSpTexLoad(int);
int scorePressure(void);
int set_event2(int, int);
int shopItemTblInit(int, Stk3, float, float, float);
int sprListPut(int, int, int, Stk3, float, float, float);
int sprSet173Put(int, Stk3);
int strmCallMatchIntro(int, int, int, int, int, int, int, int, int);
int vecMake(int, int, int, int, int, float, float, float);
int menuItemDraw1(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int hudCallWordsDrawB(int a4, int a5, int a6, int a7, float f4);
void hudScoreShow(int a4, int a5, int a6, int a7);
int courtAusDrawScoreboard(void);
int hudPanelDraw(int a4, int a5, int a6, int a7, float f4);
int standRowBarDraw(int a4, int a5, int a6, int a7);




int courtAusDrawScoreboard(void)
{
    int t0;
    int t1;
    int t2;
    int t28;
    int t36;
    int t79;
    int t145;
    int t165;
    int t34;
    int t15;
    int t26;
    int t20;
    float u50;
    float u51;
    float u52;
    int t128;
    int t129;
    int stk[22];

    t0 = *(int *)0x8C287B08;
    t1 = *(int *)0x8C185408;
    t2 = *(int *)0x8C287B0C;
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x24);
    *(unsigned int *)(((((int)stk + 4) + 0x24) + 0x0)) = (*(int *)0x8C2889DC);
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x24) + 0x4);
    *(unsigned int *)((((((int)stk + 4) + 0x24) + 0x4) + 0x0)) = (*(int *)0x8C289754);
    *(unsigned int *)(((int)stk + 28)) = ((((int)stk + 4) + 0x24) + 0x8);
    *(unsigned int *)((((((int)stk + 4) + 0x24) + 0x8) + 0x0)) = (*(int *)0x8C28A4CC);
    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 4) + 0x24) + 0xC);
    *(unsigned int *)((((((int)stk + 4) + 0x24) + 0xC) + 0x0)) = (*(int *)0x8C28B244);
    *(unsigned int *)(((int)stk + 24)) = 0x8C287B18;
    *(unsigned int *)(((int)stk + 32)) = (*(int *)0x8C287B08);
    *(unsigned int *)(((int)stk + 36)) = (*(int *)0x8C287B0C);
    if ((*(int *)0x8C287B24) != 0) {
        if (((*(int *)0x8C287B18) == 2) && (t15 = *(int *)0x8C287B1C, t15 == 2)) {
            *(unsigned int *)(((int)stk + 20)) = 0x3;
            t26 = 0x3;
        } else {
            if ((*(int *)0x8C287B18) == 3) {
                *(unsigned int *)(((int)stk + 20)) = 0x6;
                t20 = 0x5;
            } else {
                *(unsigned int *)(((int)stk + 20)) = 0x5;
                t20 = 0x6;
            }
            t26 = t20;
        }
        t34 = t26;
    } else {
        t28 = *(int *)0x8C287B18;
        *(unsigned int *)(((int)stk + 20)) = (*(int *)0x8C287B1C);
        t34 = t28;
    }
    t36 = (int)((int)t34 % (int)0x64);
    *(unsigned int *)(((int)stk + 20)) = ((int)((int)(*(int *)(((int)stk + 20))) % (int)0x64));
    if ((*(int *)0x8C287D5C) != 0) {
        if ((0x1 & ((t1 + t0) + t2)) != 0) {
            nlPushMatrix(0x0);
            *(unsigned int *)(((int)stk + 12)) = 0x8C1218C4;
            u50 = (*(float *)0x8C1218C4);
            u51 = (*(float *)0x8C1218C8);
            u52 = (*(float *)0x8C1218CC);
        } else {
            nlPushMatrix(0x0);
            *(unsigned int *)(((int)stk + 12)) = 0x8C1218D0;
            u50 = (*(float *)0x8C1218D0);
            u51 = (*(float *)0x8C1218D4);
            u52 = (*(float *)0x8C1218D8);
        }
        nlTranslate(u50, u51, u52);
        nlRotateAY(0xE38);
        nlObjPut(0xC8830E8);
        nlPopMatrix(0x1);
    }
    if ((*(int *)0x8C287ADC) == 2) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 16)) = 0x8C1218DC;
        nlTranslate((*(float *)0x8C1218DC), (*(float *)0x8C1218E0), (*(float *)0x8C1218E4));
        nlRotateAY(0xE38);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2) + 0x8C18BAA4))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t79 = *(int *)(((int)stk + 16));
        *(unsigned int *)(((int)stk + 8)) = (t79 + 0xC);
        nlTranslate((*(float *)(((t79 + 0xC) + 0x0))), (*(float *)(((t79 + 0xC) + 0x4))), (*(float *)(((t79 + 0xC) + 0x8))));
        nlRotateAY(0xE38);
        t128 = 0x8C18BAA4;
        t129 = ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) << 2);
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 12)) = 0x8C121924;
        nlTranslate((*(float *)0x8C121924), (*(float *)0x8C121928), (*(float *)0x8C12192C));
        nlRotateAY(0xE38);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2) + 0x8C18BAEC))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 8)) = 0x8C121930;
        nlTranslate((*(float *)0x8C121930), (*(float *)0x8C121934), (*(float *)0x8C121938));
        nlRotateAY(0xE38);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 28))) + 0x0))) << 2) + 0x8C18BAEC))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 8)) = 0x8C12193C;
        nlTranslate((*(float *)0x8C12193C), (*(float *)0x8C121940), (*(float *)0x8C121944));
        nlRotateAY(0xE38);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) << 2) + 0x8C18BAEC))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C121948;
        nlTranslate((*(float *)0x8C121948), (*(float *)0x8C12194C), (*(float *)0x8C121950));
        nlRotateAY(0xE38);
        t128 = 0x8C18BAEC;
        t129 = ((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) << 2);
    }
    nlObjPut((*(int *)((t129 + t128))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 4)) = 0x8C12190C;
    nlTranslate((*(float *)0x8C12190C), (*(float *)0x8C121910), (*(float *)0x8C121914));
    nlRotateAY(0xE38);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 32))) << 2) + 0x8C18BB50))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    t145 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = (t145 + 0xC);
    nlTranslate((*(float *)(((t145 + 0xC) + 0x0))), (*(float *)(((t145 + 0xC) + 0x4))), (*(float *)(((t145 + 0xC) + 0x8))));
    nlRotateAY(0xE38);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 36))) << 2) + 0x8C18BB50))));
    nlPopMatrix(0x1);
    if (((*(int *)0x8C287B3C) & 0x4000) != 0) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C1218F4;
        nlTranslate((*(float *)0x8C1218F4), (*(float *)0x8C1218F8), (*(float *)0x8C1218FC));
        nlRotateAY(0xE38);
        courtAusDrawNumber(t36);
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t165 = *(int *)(((int)stk + 4));
        nlTranslate((*(float *)(((t165 + 0xC) + 0x0))), (*(float *)(((t165 + 0xC) + 0x4))), (*(float *)(((t165 + 0xC) + 0x8))));
        nlRotateAY(0xE38);
        courtAusDrawNumber((*(int *)(((int)stk + 20))));
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C1218F4;
        nlTranslate((*(float *)0x8C1218F4), (*(float *)0x8C1218F8), (*(float *)0x8C1218FC));
        nlRotateAY(0xE38);
        if ((int)t36 < (int)0x6) {
            nlObjPut((*(int *)(((t36 << 2) + 0x8C18BB34))));
        }
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate((*(float *)0x8C121900), (*(float *)0x8C121904), (*(float *)0x8C121908));
        nlRotateAY(0xE38);
        if ((int)(*(int *)(((int)stk + 20))) < (int)0x6) {
            nlObjPut((*(int *)((((*(int *)(((int)stk + 20))) << 2) + 0x8C18BB34))));
        }
    }
    return (nlPopMatrix(0x1));
}




