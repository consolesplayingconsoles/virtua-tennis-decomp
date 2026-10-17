/* Ported from crazy-taxi-decomp (src/sdk_u.c) by scripts/port_equiv.py: only the functions the destination has. */
/* Small library functions (batch u): SJ buffer destroys, the SJ decoder clears, the stream start. */

void *memset(void *p, int c, unsigned int n);
int ADXSTM_Tell(int *h);


int ADXSTM_Start(int *h)
{
    if (h[5] == 0) {
        h[13] = 0;
        h[3] = 0;
        ((char *)h)[1] = 3;
    } else {
        ((char *)h)[1] = 2;
        h[13] = 0;
        h[3] = ADXSTM_Tell(h);
    }
    return 1;
}


void SJMEM_Destroy(int *h)
{
    if (h) {
        memset(h, 0, 36);
        h[1] = 0;
    }
}


void SJUNI_Destroy(int *h)
{
    if (h) {
        memset(h, 0, 48);
        ((char *)h)[4] = 0;
    }
}
