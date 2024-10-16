#include "vector_3d.h"

struct vector_3d sum(struct vector_3d a, struct vector_3d b)
{
    struct vector_3d result;
    result.x=a.x+b.x;
    result.y=a.y+b.y;
    result.z=a.z+b.z;
    return result;
}
struct vector_3d sub(struct vector_3d a, struct vector_3d b)
{
    struct vector_3d result;
    result.x=a.x-b.x;
    result.y=a.y-b.y;
    result.z=a.z-b.z;
    return result;
}
float dot(struct vector_3d a, struct vector_3d b)
{
    struct vector_3d result;
    result.x=a.x*b.x;
    result.y=a.y*b.y;
    result.z=a.z*b.z;
    
    return result.x+result.y+result.z;
}
struct vector_3d cros(struct vector_3d a, struct vector_3d b)
{
    struct vector_3d result;
    result.x=a.y*b.z-a.z*b.y;
    result.y=a.z*b.x-a.x*b.z;
    result.z=a.x*b.y-a.y*b.x;
    
    return result;
}