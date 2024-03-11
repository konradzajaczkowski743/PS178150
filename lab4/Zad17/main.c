#include <stdio.h>
#include <stdlib.h>
void swapSign(double* w1, double* w2)
{
    if(*w1 * *w2 < 0){
        double temp = *w1;
        *w1 = *w2;
        *w2 = temp;
    }
}
int main()
{
    double a = 10.23 , b = 15.1;
    swapSign(&a,&b);
    printf("%f %f\n", a ,b);

    double c = -10.5 , d = 5.6;
    swapSign(&c,&d);
    printf("%f %f", c ,d);

    return 0;
}
