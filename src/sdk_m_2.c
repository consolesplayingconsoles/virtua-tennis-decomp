/* Small library functions (batch m): matrix setup sequences, model parameter walks, a 24-byte entry table, byte and
   halfword splitting, memcmp, palette and print-state setup. */

void nlGetMatrix8(void *m);
void nlMultiPushedMatrix(void);
void nlPushMatrix(void *m);
void nlMultiMatrix(void *m);
void nlMultiMatrix8(void *m);
void nlGetMatrix(void *m);
void nlPopMatrix(int n);
void nlLoadRechangeMatrix(void *m);
void nlLoadMatrix8(void *m);
void nlPrintSetGarbagedTexture(void);
int kmiWriteRegister(int off, int v);


/* A word split into 4 bytes, most significant first. */
void _mvito4b(char *dst, int *src)
{
    int i, w = *src;

    for (i = 0; i < 4; i++)
        *dst++ = w >> (24 - 8 * i);
}


/* A halfword split into 2 bytes, most significant first. */
void _mvsto2b(char *dst, unsigned short *src)
{
    int i, h = *src;

    for (i = 0; i < 2; i++)
        *dst++ = h >> (8 - 8 * i);
}
