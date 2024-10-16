#include<stdio.h>
#include "vector_3d.h"

int main() {
    struct vector_3d a={2.0,3.0,4.0};
    struct vector_3d b = {4.0, 5.0, 6.0};
    
    struct vector_3d result;
    
    result=sub(a,b);
    printf("Sub: %f, %f, %f\n", result.x, result.y, result.z);
    
    result=sum(a,b);
    printf("Sum: %f, %f, %f\n", result.x, result.y, result.z);
    
    result=cros(a,b);
    printf("Cros: %f, %f, %f\n", result.x, result.y, result.z);
    
    float res=dot(a,b);
    printf("Dot : %f\n", res);
    
    
    return 0;
}