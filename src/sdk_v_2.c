/* Small library functions (batch v): the two frame-buffer queues' sort and collect, the vmsfs work area's device kind. */

void FUN_0c157580(int *a, int *b);
int FUN_0c15762c(int *a, int *b, int *c, int *d);


/* The C library's memmove: copies forward when d is below s, backward otherwise; returns d. */
char *memmove(char *d, char *s, unsigned int n)
{
    unsigned int i;

    if (d == s)
        return d;
    if (d < s) {
        for (i = 0; i < n; i++)
            d[i] = s[i];
    } else {
        for (i = 0; i < n; i++)
            d[n - 1 - i] = s[n - 1 - i];
    }
    return d;
}
