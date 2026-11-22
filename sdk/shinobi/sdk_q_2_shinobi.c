/* Small library functions (batch q): the individual ID checksum, SJ unit reset, ADX output bit depth, G2 bus status. */

/* The ID block's check: byte 1 is the sum of bytes 2-7 and byte 0 is its complement. */
int syCfgIIDCheckSum(unsigned char *p)
{
    int i;
    unsigned char sum = 0;

    for (i = 0; i < 6; i++)
        sum += p[2 + i];
    if (sum != p[1])
        return 0;
    if ((unsigned char)~sum != p[0])
        return 0;
    return 1;
}


/* A chain of 16-byte cells in h's buffer (count at +16): each linked to the next, the last to 0, the counters cleared. */


/* An ADX decoder's output bit depth: 4, 8 or 16 from its two mode halfwords at +168 and +170. */
