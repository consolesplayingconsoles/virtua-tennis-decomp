/* Wrappers that pass a fifth or sixth argument on the stack. Where the original leaves r6/r7 as they
   came in, the C takes them as parameters and passes them on. */

extern int kdSetDriverMode(int mode, int a, int b, int c, int d);
extern int mpdrv_setcmd(int port, int cmd, void *p, int n, int e, int f);
extern int syG2Write(void *src, unsigned int dst, int size, int n, int e, int f);
extern int kmSetFogTableColor(int a, int b, int c, int d, int e);
extern int kmSetFogVertexColor(int a, int b, int c, int d, int e);
extern void mwRnaErrCallFunc(int *h, int b, int c, int d, char *msg);

extern void Voice_ShutUp(int ch);
extern void Voice_Request(int voice, int ch, int a, int b);


/* AR control: a two-word parameter block {32, value}. */


/* The AICA real-time clock registers (date low / high word, write enable) through syG2Write. */


/* Set the first sample to play (+68); a null handle is reported instead. */
void mwRnaSetStartSmpl(int *h, int smpl, int c, int d)
{
    if (!h) {
        mwRnaErrCallFunc(h, smpl, c, d, (char *)0x8C20AC30);
        return;
    }
    h[17] = smpl;
}


/* Ask for a flush (byte +6 = 1). */
void mwRnaFlush(int *h, int b, int c, int d)
{
    if (!h) {
        mwRnaErrCallFunc(h, b, c, d, (char *)0x8C20AC30);
        return;
    }
    if (((unsigned char *)h)[6] != 1) {
        ((unsigned char *)h)[6] = 1;
    }
}


/* The filter pair (+124, +128). */
void mwRnaGetFilter(int *h, int *lo, int *hi, int d)
{
    if (!h) {
        mwRnaErrCallFunc(h, (int)lo, (int)hi, d, (char *)0x8C20AC30);
        return;
    }
    *lo = h[31];
    *hi = h[32];
}


/* The effect pair (+108, +112); -1 for both on a null handle. */
void mwRnaGetFx(int *h, int *a, int *b, int d)
{
    int stk[2];         /* the original keeps b at sp and a at sp + 4, above the message it pushes */

    stk[1] = (int)a;
    stk[0] = (int)b;
    if (!h) {
        mwRnaErrCallFunc(h, (int)a, (int)b, d, (char *)0x8C20AC30);
        *(int *)stk[1] = -1;
        *(int *)stk[0] = -1;
        return;
    }
    *(int *)stk[1] = h[27];
    *(int *)stk[0] = h[28];
}


/* The pitch pair (+116, +120); -1 for both on a null handle. */
void mwRnaGetPitch(int *h, int *a, int *b, int d)
{
    int stk[2];         /* the original keeps b at sp and a at sp + 4, above the message it pushes */

    stk[1] = (int)a;
    stk[0] = (int)b;
    if (!h) {
        mwRnaErrCallFunc(h, (int)a, (int)b, d, (char *)0x8C20AC30);
        *(int *)stk[1] = -1;
        *(int *)stk[0] = -1;
        return;
    }
    *(int *)stk[1] = h[29];
    *(int *)stk[0] = h[30];
}


/* Block read request: {block, (a << 24) | (b << 16) | c}, two words. */
