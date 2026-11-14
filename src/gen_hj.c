/* Straight-line functions with calls and guards (batch gen_hj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int ADXT_GetOutVol(int);
int ADXT_Stop(int);
int charaModelCount(int);
int nlObjPutFreeTextureOnce(int);
int nlObjPutSetGarbagedTexture(int);
int nlSetCommonTextureOffset(int);
int uniformPreviewFree(void);
int charaTexReloadAll(void);
int strmBgmFadeOut(int a4, int a5);

int uniformPreviewFree(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = 0x8C37DBCC;
    t1 = 0x8C37DBBC;
    t2 = 0x0;
    for (;;) {
        if ((*(int *)((t1 + 0x0))) != 0) {
            t3 = t2;
            t0 = (*(int *)((0x8C124DE0 + t3)));
            t3 = (nlSetCommonTextureOffset(t0));
            t3 = t2;
            t0 = (*(int *)((0x8C1B1D8C + t3)));
            t3 = (nlObjPutFreeTextureOnce(t0));
            t3 = t2;
            *(unsigned int *)((0x8C37DBBC + t3)) = 0x0;
        } else {
            t4 = t0;
        }
        t0 = t4;
        t1 = (t1 + 0x4);
        t2 = (t2 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)(0x8C37DBCC)) {
            break;
        }
    }
    t0 = 0x8C37DB44;
    for (;;) {
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0x8C37DBBC) {
            break;
        }
    }
    return t3;
}

int charaTexReloadAll(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = 0x8C1AFAAC;
    t1 = 0x8C1B05DC;
    t2 = 0x8C1B054C;
    t3 = 0x8C1AFA64;
    for (;;) {
        if ((*(int *)((t3 + 0x0))) != 0) {
            t0 = (*(int *)((t1 + 0x0)));
            t4 = (nlSetCommonTextureOffset(t0));
            t5 = 0x0;
            for (;;) {
                t0 = t5;
                t4 = (charaModelCount(t0));
                if ((int)t5 >= (int)t4) {
                    break;
                }
                t4 = t5;
                t4 = (t4 << 2);
                t0 = (*(int *)(((*(int *)((t2 + 0x0))) + t4)));
                t4 = (nlObjPutSetGarbagedTexture(t0));
                t5 = (t5 + 0x1);
            }
        } else {
            t5 = t0;
        }
        t0 = t5;
        t3 = (t3 + 0x4);
        t2 = (t2 + 0x4);
        t1 = (t1 + 0x4);
        if ((unsigned int)t3 >= (unsigned int)(0x8C1AFAAC)) {
            break;
        }
    }
    return t4;
}

int strmBgmFadeOut(int a4, int a5)
{
    register int t0;

    t0 = (((struct o2C_int *)0x8C38BA68)->v);
    if (a4 != 0) {
        (((struct o0_uint *)0x8C38BA68)->v) = (ADXT_GetOutVol(t0));
        (((struct o0_uint *)0x8C40C220)->v) = 0x2;
        (((struct oC_uint *)0x8C40C220)->v) = a5;
        (((struct o4_float *)0x8C40C220)->v) = ((float)(((((struct o0_int *)0x8C38BA68)->v)) + 0xDC) / ((float)a4 * (*(float *)0x8C0D6DC4)));
        return 0x4;
    }
    return ADXT_Stop(t0);
}
