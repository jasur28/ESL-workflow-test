#ifndef VECTOR_3D_H
#define VECTOR_3D_H

typedef struct vector_3d
{
    float x;
    float y;
    float z;
} vector_3d_t;

void vector_sum(const vector_3d_t* a, const vector_3d_t* b, vector_3d_t* out);
void vector_sub(const vector_3d_t* a, const vector_3d_t* b, vector_3d_t* out);
float vector_dot(const vector_3d_t* a, const vector_3d_t* b);
void vector_cros(const vector_3d_t* a, const vector_3d_t* b, vector_3d_t* out);


#endif