/* Ported from crazy-taxi-decomp (src/trig.c) by scripts/port_equiv.py: only the functions the destination has. */
/* The NAOMI library's trigonometry: nlSin, nlCos, nlArcTan2. Ranges 0C0760A0-0C076114, 0C075B20-0C075B38, 0C075A50-0C075AF4.
   NLangle: 0x10000 is a turn. nlSin halves the angle, reduces it to a quarter turn and takes
   tan(z) as the continued fraction z / (1 - z2/(3 - z2/(5 - ...))), then sin(2z) = 2t / (1 + t2). */

int nlArcTan(float t);
float nlSin(int a);


float nlCos(int a)
{
    unsigned int u = (unsigned short)a;

    if (u > 0x8000)
        u = 0x10000 - u;
    return nlSin(0x4000 - u);
}
