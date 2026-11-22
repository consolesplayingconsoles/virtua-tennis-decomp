/* The NAOMI library's vector maths (nl*), the small ones the mod calls. Range 8C0F0520-8C0F0720.
   The original sums with fipr (one rounding, approximate on the hardware), this C with float multiplies and adds: the cases use values exact in float. */

/* SHC's own fsqrt intrinsic (what math.h maps sqrtf to with -fpu=single) */
extern float _builtin_sqrtf(float);

float nlInnerProduct(float *left, float *right)
{
    return left[0] * right[0] + left[1] * right[1] + left[2] * right[2];
}

float nlLength(float *start, float *end)
{
    float deltaX = start[0] - end[0];
    float deltaY = start[1] - end[1];
    float deltaZ = start[2] - end[2];

    return _builtin_sqrtf(deltaX * deltaX + deltaY * deltaY + deltaZ * deltaZ);
}

void nlAddVector(float *destination, float *source)
{
    destination[0] = destination[0] + source[0];
    destination[1] = destination[1] + source[1];
    destination[2] = destination[2] + source[2];
}

void nlScaleVector(float *destination, float *source, float scale)
{
    destination[0] = source[0] * scale;
    destination[1] = source[1] * scale;
    destination[2] = source[2] * scale;
}

void nlSubVector3op(float *destination, float *left, float *right)
{
    destination[0] = left[0] - right[0];
    destination[1] = left[1] - right[1];
    destination[2] = left[2] - right[2];
}
