
void mwRnaSetSfreq(char *o, int f)
{
    int **p;

    if (o == 0) {
        mwRnaErrCallFunc((int)o, g_8c20ac30);
        return;
    }
    p = *(int ***)(o + 56);
    ((void (*)(int **, int))(*p)[9])(p, f);
    *(int *)(o + 12) = f;
}
