/* Shadow volumes written by hand: the closed volume a point light casts from a model's strips, built in the buffer at 0x8C12C5F0
   and drawn with nlObjPutMvClosedVolume: from a point light (shadowVolBuildPoint) or along the light direction at 0x8C2859F4
   (shadowVolBuildDir). */

int shadowVolExtrude(int *in, int *out);
int shadowVolExtrudeTmp(int *in, int *out, int *dir);
float nlInnerProduct(int *a, int *b);
void prefetch(int *p);
void nlScaleUnitVector(float *dst, float *src, float s);
void nlAddVector3op(float *out, float *a, float *b);
int nlObjPutMvClosedVolume(int *vol);

#define VOL ((int *)0x8C12C5F0)
#define LIGHTDIR ((float *)0x8C2859F4)

/* Copy one vertex (3 words) to the volume, its first word with the low bit set (the strip flag), and step to the next slot. */
#define PUT(dst, src) ((dst)[0] = (src)[0] | 1, (dst)[1] = (src)[1], (dst)[2] = (src)[2], (dst) += 8)

/* manual: written by hand from the Dreamcast code (the generator's reader timed out on its four nested loops); tools must not regenerate it */
int shadowVolBuildPoint(int *mdl)
{
    int *base = mdl;
    int *p = mdl + 6;
    int end;
    int n, count;
    int step;
    int *prev0, *prev1, *v, *s;
    float h;
    int q[3], r[3], a[3], pt[3], nrm[3], dir[3];

    while (*p != 0) {
        end = p[19] + ((p - base) + 20) * 4;
        p += 4;
        VOL[10] = *p++;
        VOL[11] = *p++;
        VOL[12] = *p++;
        h = *(float *)0x8C2859D8 + 2.0f * *(float *)p++;
        *(float *)&VOL[13] = h;
        p += 12;
        while ((p - base) * 4 < end) {
            p++;
            count = *p++;
            n = 2;
            q[0] = *p++;
            q[1] = *p++;
            q[2] = *p++;
            p += 5;
            pt[0] = *p++;
            pt[1] = *p++;
            pt[2] = *p++;
            p += 5;
            shadowVolExtrude(pt, a);
            shadowVolExtrude(q, r);
            prev0 = q;
            prev1 = r;
            while (n < count) {
                step = 2;
                s = VOL + 36;
                PUT(s, prev0);
                s = VOL + 52;
                PUT(s, prev1);
                v = VOL + 28;
                PUT(v, pt);
                v = VOL + 44;
                PUT(v, a);
                v = VOL + 60;
                while (n < count) {
                    n++;
                    pt[0] = *p++;
                    pt[1] = *p++;
                    pt[2] = *p++;
                    nrm[0] = *p++;
                    nrm[1] = *p++;
                    nrm[2] = *p++;
                    p += 2;
                    prefetch(p);
                    shadowVolExtrudeTmp(pt, a, dir);
                    if (0.0f > nlInnerProduct(nrm, dir)) {
                        if (step & 1) {
                            prev0 = v - 16;
                            prev1 = v - 32;
                        } else {
                            prev0 = v - 32;
                            prev1 = v - 16;
                        }
                        break;
                    }
                    step++;
                    if (step & 1) {
                        PUT(v, a);
                        s = step == 3 ? v - 32 : v - 56;
                        PUT(v, s);
                        PUT(v, pt);
                    } else {
                        PUT(v, pt);
                        s = v - 56;
                        PUT(v, s);
                        PUT(v, a);
                    }
                    s = v - 56;
                    PUT(v, s);
                    if (step >= 10) {
                        if (step & 1) {
                            prev0 = v - 8;
                            prev1 = v - 48;
                        } else {
                            prev0 = v - 48;
                            prev1 = v - 8;
                        }
                        break;
                    }
                }
                if (step > 2) {
                    s = v - 32;
                    PUT(v, s);
                    s = v - 56;
                    PUT(v, s);
                    {
                        int k = (v - VOL) - 28;
                        int m = k >> 3;
                        VOL[25] = (k + 2) * 4;
                        VOL[27] = m;
                        v[0] = 0;
                        v[1] = m;
                    }
                    nlObjPutMvClosedVolume(VOL);
                }
            }
        }
    }
    return 1;
}

/* manual: written by hand from the Dreamcast code (the generator's reader timed out on its four nested loops); tools must not regenerate it */
int shadowVolBuildDir(int *mdl)
{
    int *base = mdl;
    int *p = mdl + 6;
    int end;
    int n, count;
    int step;
    int *prev0, *prev1, *v, *s;
    float hd, f;
    float off[3];
    int q[3], r[3], a[3], pt[3], nrm[3];

    while (*p != 0) {
        end = p[19] + ((p - base) + 20) * 4;
        p += 4;
        f = *(float *)&p[3];
        hd = *(float *)0x8C2859D8 * 0.5f;
        nlScaleUnitVector(off, LIGHTDIR, hd + f);
        nlAddVector3op((float *)&VOL[10], (float *)p, off);
        *(float *)&VOL[13] = 2.0f * f + hd;
        p += 16;
        while ((p - base) * 4 < end) {
            p++;
            count = *p++;
            n = 2;
            q[0] = *p++;
            q[1] = *p++;
            q[2] = *p++;
            p += 5;
            pt[0] = *p++;
            pt[1] = *p++;
            pt[2] = *p++;
            p += 5;
            nlAddVector3op((float *)a, (float *)pt, LIGHTDIR);
            nlAddVector3op((float *)r, (float *)q, LIGHTDIR);
            prev0 = q;
            prev1 = r;
            while (n < count) {
                step = 2;
                s = VOL + 36;
                PUT(s, prev0);
                s = VOL + 52;
                PUT(s, prev1);
                v = VOL + 28;
                PUT(v, pt);
                v = VOL + 44;
                PUT(v, a);
                v = VOL + 60;
                while (n < count) {
                    n++;
                    pt[0] = *p++;
                    pt[1] = *p++;
                    pt[2] = *p++;
                    nrm[0] = *p++;
                    nrm[1] = *p++;
                    nrm[2] = *p++;
                    p += 2;
                    prefetch(p);
                    nlAddVector3op((float *)a, (float *)pt, LIGHTDIR);
                    if (0.0f > nlInnerProduct(nrm, (int *)LIGHTDIR)) {
                        if (step & 1) {
                            prev0 = v - 16;
                            prev1 = v - 32;
                        } else {
                            prev0 = v - 32;
                            prev1 = v - 16;
                        }
                        break;
                    }
                    step++;
                    if (step & 1) {
                        PUT(v, a);
                        s = step == 3 ? v - 32 : v - 56;
                        PUT(v, s);
                        PUT(v, pt);
                    } else {
                        PUT(v, pt);
                        s = v - 56;
                        PUT(v, s);
                        PUT(v, a);
                    }
                    s = v - 56;
                    PUT(v, s);
                    if (step >= 10) {
                        if (step & 1) {
                            prev0 = v - 8;
                            prev1 = v - 48;
                        } else {
                            prev0 = v - 48;
                            prev1 = v - 8;
                        }
                        break;
                    }
                }
                if (step > 2) {
                    s = v - 32;
                    PUT(v, s);
                    s = v - 56;
                    PUT(v, s);
                    {
                        int k = (v - VOL) - 28;
                        int m = k >> 3;
                        VOL[25] = (k + 2) * 4;
                        VOL[27] = m;
                        v[0] = 0;
                        v[1] = m;
                    }
                    nlObjPutMvClosedVolume(VOL);
                }
            }
        }
    }
    return 1;
}
