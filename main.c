#include<stdio.h>
#include "vector_3d.h"

int main() {
    vector_3d_t a = {2.0, 3.0, 4.0};
    vector_3d_t b = {4.0, 5.0, 6.0};
    vector_3d_t result;
    
    vector_sub(&a,&b,&result);
    printf("Sub: %f, %f, %f\n", result.x, result.y, result.z);
    
    vector_sum(&a,&b,&result);
    printf("Sum: %f, %f, %f\n", result.x, result.y, result.z);
    
    vector_cros(&a,&b,&result);
    printf("Cros: %f, %f, %f\n", result.x, result.y, result.z);
    
    float res=vector_dot(&a,&b);
    printf("Dot : %f\n", res);
    
    return 0;
}