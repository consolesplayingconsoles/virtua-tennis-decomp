/* A sprite list drawn as textured strips, written by hand: each 156-byte entry is a texture, its width and height, and six
   vertices of six floats (x, y, z, u, v, unused); one strip of six vertices per entry. */

typedef struct { int w[3]; } Stk3;

int nlDispStripTexOfsTrnsl(int n, int *verts, int tex);

/* manual: written by hand from the Dreamcast code (the generator's reader timed out on its mode switch inside two loops); tools must not regenerate it */
void sprListPutEx(int *list, int count, int mode, float scale, float c1, float c2, Stk3 pos)
{
    int verts[6 * 7];
    int *last;
    int i, k;
    int g, b, base_col, hi_col, hi, col;
    float x, d, px;
    float *src, *v;

    if (count == 0)
        return;
    last = list + (count - 1) * 39;
    g = (unsigned char)(int)(c1 * 255.0f);
    b = (unsigned char)(int)(c2 * 255.0f);
    for (i = 0; i < count; i++, list += 39) {
        for (k = 0; k < 6; k++) {
            src = (float *)(list + 3) + k * 6;
            v = (float *)&verts[k * 7];
            v[0] = src[0] + *(float *)&pos.w[0];
            v[1] = src[1] + *(float *)&pos.w[1];
            v[2] = *(float *)&pos.w[2];
            v[3] = src[3] / *(float *)&list[1];
            v[4] = 1.0f - src[4] / *(float *)&list[2];
            base_col = g << 16 | g << 8 | g | 0xFF000000;
            ((int *)v)[5] = base_col;
            ((int *)v)[6] = 0;
            hi = 0;
            px = *(float *)&pos.w[0];
            hi_col = b << 16 | b << 8 | b | 0xFF000000;
            if (mode == 1) {
                ((int *)v)[6] = hi_col;
                continue;
            }
            if (mode < 2 || mode > 4)
                continue;
            if (count == 1) {
                if (mode == 2 ? k == 2 || k == 3 : mode == 3 ? k == 2 : k == 3) {
                    col = hi_col;
                    hi = 1;
                    v[0] = scale * *(float *)&list[33] + px;
                    v[3] = *(float *)&list[36] * scale / *(float *)&list[1];
                }
            } else {
                x = *(float *)&last[33] * scale;
                if (!(*(float *)&list[3] > x) && !(x > *(float *)&list[33])
                    && (mode == 2 ? k == 2 || k == 3 : mode == 3 ? k == 2 : k == 3)) {
                    v[0] = x + px;
                    col = hi_col;
                    v[3] = (*(float *)&list[6] + x - *(float *)&list[3]) / *(float *)&list[1];
                    hi = 1;
                } else {
                    d = x - src[0];
                    if (0.0f > d)
                        d = -x + src[0];
                    if (130.0f > d && (mode == 2 || (mode == 3 ? k % 2 == 0 : k % 2 == 1))) {
                        col = hi_col;
                        hi = 1;
                    }
                }
            }
            if (hi)
                ((int *)v)[6] = col;
        }
        nlDispStripTexOfsTrnsl(6, verts, list[0]);
    }
}
