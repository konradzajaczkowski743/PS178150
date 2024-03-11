#include <stdio.h>
#include <stdlib.h>
float* initFloats()
{
    float *wsk = malloc(3*sizeof(float));
    *wsk = 4.5;
    *(wsk + 1) = 2.3;
    *(wsk + 2) = -4.2;
    return wsk;
}
int main()
{
    float* wynik = initFloats();
    printf("%f\n", *wynik);
    printf("%f\n", *(wynik+1));
    printf("%f\n", *(wynik+2));
    return 0;

}
