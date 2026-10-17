/* Ported from crazy-taxi-decomp (src/sdk_p.c) by scripts/port_equiv.py: only the functions the destination has. */



int mwlRnaSetInitMember(char *p)
{
    p[1] = 0;
    p[4] = 0;
    p[5] = 0;
    p[6] = 0;
    *(int *)(p + 52) = 0;
    *(int *)(p + 44) = 0;
    *(int *)(p + 48) = 0;
    *(int *)(p + 64) = 0x2000;
    *(int *)(p + 68) = 0x2000;
    *(int *)(p + 72) = 0;
    *(int *)(p + 96) = 0;
    *(int *)(p + 108) = -1;
    *(int *)(p + 112) = 0;
    *(int *)(p + 116) = 0;
    *(int *)(p + 120) = 0;
    *(int *)(p + 124) = 0;
    *(int *)(p + 128) = 0;
    *(int *)(p + 140) = 0;
    p[7] = 0;
    *(int *)(p + 136) = 0;
    return 136;
}
