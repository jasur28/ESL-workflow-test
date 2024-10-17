#include "vector_3d.h"

void vector_sum(const vector_3d_t *a, const vector_3d_t *b, vector_3d_t *out)
{
    out->x=a->x+b->x;
    out->y=a->y+b->y;
    out->z=a->z+b->z;
}
void vector_sub(const vector_3d_t* a, const vector_3d_t* b, vector_3d_t* out)
{
    out->x=a->x-b->x;
    out->y=a->y-b->y;
    out->z=a->z-b->z;
}
float vector_dot(const vector_3d_t* a, const vector_3d_t* b)
{
    return a->x*b->x+a->y*b->y+a->z*b->z;
}
void vector_cros(const vector_3d_t* a, const vector_3d_t* b, vector_3d_t* out)
{
    out->x=a->y*b->z-a->z*b->y;
    out->y=a->z*b->x-a->x*b->z;
    out->z=a->x*b->y-a->y*b->x;
}