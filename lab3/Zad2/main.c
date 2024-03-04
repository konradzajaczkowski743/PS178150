#include <stdio.h>
#include <stdlib.h>

float calculateAbsoluteValue(float x)
{
    if(x >= 0){
        return x;
    }
    else{
        return (-1.0*x);
    }
}
int main()
{
    printf("%f\n", calculateAbsoluteValue(-1.9));
    printf("%f\n", calculateAbsoluteValue(2.7));
    printf("%f", calculateAbsoluteValue(0));
    return 0;
}
