#ifndef VECTOR_3D_H
#define VECTOR_3D_H

struct vector_3d
{
    float x;
    float y;
    float z;
};

struct vector_3d sum(struct vector_3d a, struct vector_3d b);
struct vector_3d sub(struct vector_3d a, struct vector_3d b);
float dot(struct vector_3d a, struct  vector_3d b);
struct vector_3d cros( struct vector_3d a, struct  vector_3d b);


#endif