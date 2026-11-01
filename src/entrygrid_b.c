/* entryGridDrawCursors, written by hand from the Dreamcast code (8C0ABB9A, 1,548 bytes): the generated C kept the original's frame as an
   array and compiled to 5,636 bytes; this is the same function as plain C, 1,484 bytes. Checked on the 12 cases drawn for it
   (tests/entrygrid_b/). */

typedef struct { int w[1]; } Stk1;
typedef struct { float x, y, z; } Vector3f;

float mathLerp(float, float, float);
int panelMenuSprPutA(Vector3f, Stk1, float);
extern int primFrameCorners();
int primLineH(int, int, Vector3f, Vector3f);
Vector3f vecMake(float, float, float);

/* the cursor of grid slot a4 in colour a5 (-1 white, 0 orange, 1 cyan, 2 yellow, 3 violet) at the vector the caller passes on the stack
   (a8 is its x; a6 and a7 are whatever the caller left in r6 and r7) */
int entryGridDrawCursors(int a4, int a5, int a6, int a7, int a8)
{
    float *t;                   /* the slot's fade, 0..1 */
    float f, g;                 /* the fade used for the colour, and 1 - it */
    int r, gr, b, r7, colour, k, w;
    Vector3f *pos, c0, c1, c2, c3, d0, d1, d2, d3, e, l;
    Stk1 tp;

    if (*(int *)0x8C287ADC == 2 && (a4 == 1 || a4 == 2))
        return a4;
    pos = (Vector3f *)&a8;            /* the caller's vector, which this moves and flattens */
    pos->x += *(float *)0x8C18D2DC;
    t = (float *)(0x8C185604 + (a4 << 2));
    if (a5 >= 0) {
        f = 0.5f;
        *t = mathLerp(*t, 0.5f, 0.390625f);
    } else {
        *t = 1.0f;
        f = 1.0f;
    }
    r = a4; gr = b = a5; r7 = a7;
    if (a5 == -1) {
        r = gr = b = r7 = 0xFF;
    } else {
        g = 1.0f - f;
        f = f * 255.0f;
        if (a5 == 0) {
            r = (int)(f + g * 250.0f); gr = (int)(f + g * 30.0f); b = (int)(f + g * 0.0f);
        } else if (a5 == 1) {
            r = (int)(f + g * 0.0f); r7 = gr = b = (int)(f + g * 230.0f);
        } else if (a5 == 2) {
            r = gr = (int)(f + g * 230.0f); b = (int)(f + g * 0.0f);
        } else if (a5 == 3) {
            r = (int)(f + g * 180.0f); gr = (int)(f + g * 100.0f); b = (int)(f + g * 240.0f);
        }
    }
    colour = ((unsigned char)r << 16) | ((unsigned char)gr << 8) | (unsigned char)b | 0xFF000000;
    k = a5 == 0 ? 2 : a5 == 1 ? 0 : a5 == 2 ? 3 : a5 == 3 ? 1 : colour;
    pos->z = c0.z = c1.z = c2.z = c3.z = 0.003f;
    w = 0x9F;

    /* the four corners: the bar 159 wide and 84 high, cut by the fade along the side the slot sits on */
    if (k == 2) {
        c0.x = pos->x - (1.0f - *t) * 159.0f;  c0.y = pos->y;
        c1.x = pos->x + -159.0f;               c1.y = pos->y;
        c2.x = pos->x - (1.0f - *t) * 159.0f;  c2.y = pos->y + 84.0f * *t + 1.0f;
        c3.x = pos->x + -159.0f;               c3.y = pos->y + 84.0f * *t + 1.0f;
    } else if (k == 0) {
        c0.x = pos->x;                         c0.y = pos->y;
        c1.x = pos->x - *t * 159.0f;           c1.y = pos->y;
        c2.x = pos->x;                         c2.y = pos->y + 84.0f * *t + 1.0f;
        c3.x = pos->x - *t * 159.0f;           c3.y = pos->y + 84.0f * *t + 1.0f;
    } else if (k == 3) {
        c0.x = pos->x - (1.0f - *t) * 159.0f;  c0.y = pos->y + 84.0f * (1.0f - *t);
        c1.x = pos->x + -159.0f;               c1.y = pos->y + 84.0f * (1.0f - *t);
        c2.x = pos->x - (1.0f - *t) * 159.0f;  c2.y = pos->y + 84.0f;
        c3.x = pos->x + -159.0f;               c3.y = pos->y + 84.0f;
    } else if (k == 1) {
        c0.x = pos->x;                         c0.y = pos->y + 84.0f * (1.0f - *t);
        c1.x = pos->x - *t * 159.0f;           c1.y = pos->y + 84.0f * (1.0f - *t);
        c2.x = pos->x;                         c2.y = pos->y + 84.0f;
        c3.x = pos->x - *t * 159.0f;           c3.y = pos->y + 84.0f;
    } else {
        c0.x = pos->x;                         c0.y = pos->y;
        c1.x = pos->x + -159.0f;               c1.y = pos->y;
        c2.x = pos->x;                         c2.y = pos->y + 84.0f;
        c3.x = pos->x + -159.0f;               c3.y = pos->y + 84.0f;
    }
    if (*(int *)0x8C1855E4 == 0)
        primFrameCorners(1, colour, (unsigned char)b, r7, c0, c1, c2, c3);
    d0 = vecMake(c0.x + 1.0f, c0.y + 1.0f, c0.z);
    d1 = vecMake(c1.x + 1.0f, c1.y + 1.0f, c1.z);
    d2 = vecMake(c2.x + 1.0f, c2.y + 1.0f, c2.z);
    d3 = vecMake(c3.x + 1.0f, c3.y + 1.0f, c3.z);
    if (*(int *)0x8C1855E4 == 0)
        primFrameCorners(1, 0xB4000000, d0, d1, d2, d3);

    /* the leader line under the bar, from the slot's side, and the button sprite at its end */
    k = 82;
    if ((a4 == 0 || a4 == 2) ? (a5 == 1 || a5 == 3) : (a5 == 0 || a5 == 2))
        k += w - (int)(c0.x - c1.x);
    l.z = e.z = pos->z;
    l.y = e.y = pos->y + 42.0f;
    if (a4 == 0 || a4 == 2) {
        l.x = (float)(int)c1.x;
        e.x = (float)(int)(l.x - (float)k);
    } else {
        l.x = (float)(int)c0.x;
        e.x = (float)(int)(l.x + (float)k);
    }
    if (*(int *)0x8C1855E4 == 0)
        primLineH(1, colour, l, e);
    e = vecMake(e.x + ((a4 == 0 || a4 == 2) ? -9.0f : -4.0f), e.y + -7.0f, e.z + -9.99999975e-05f);
    tp.w[0] = (int)t;
    if (*(int *)0x8C1855E4 == 0 && *(int *)(0x8C343ADC + (a4 << 2)) != 0)
        return panelMenuSprPutA(e, tp, (*(float *)0x8C343F1C + 1.0f) / (1.0f + 1.0f));
    return panelMenuSprPutA(e, tp, 0.0f);
}
