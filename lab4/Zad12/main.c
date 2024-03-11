#include <stdio.h>
#include <stdlib.h>
float linFuncVal(float * const a, const float *  b, float * const x)
{
    return *a * *x + *b;
}

int main()
{
    float a = 1.5 ,x=3,b=4.5;

    printf("%f",linFuncVal(&a, &b, &x));

    return 0;
}
